#include "footactive.h"
#include "ui_footactive.h"
#include "scanrecoviewmaster.h"
#include <QtGui>
#include <QDebug>

//BITWISE Değişken tanımlamaları
const uint8_t BIT_0 = 0x01; // 00000001
const uint8_t BIT_1 = 0x02; // 00000010
const uint8_t BIT_2 = 0x04; // 00000100
const uint8_t BIT_3 = 0x08; // 00001000
const uint8_t BIT_4 = 0x10; // 00010000
const uint8_t BIT_5 = 0x20; // 00100000
const uint8_t BIT_6 = 0x40; // 01000000
const uint8_t BIT_7 = 0x80; // 10000000

FootActive::FootActive(QWidget *parent) :
    View(parent),
    ui(new Ui::FootActive)
{
    ui->setupUi(this);

    ui->X_Value->setVisible(false);
    ui->Y_Value->setVisible(false);
    ui->DengeTopu->setVisible(false);
    ui->X_Arti_Bargraph->setVisible(false);
    ui->X_Eksi_Bargraph->setVisible(false);
    ui->Y_Arti_Bargraph->setVisible(false);
    ui->Y_Eksi_Bargraph->setVisible(false);
    ui->x_ui->setVisible(false);
    ui->y_ui->setVisible(false);
}

FootActive::~FootActive()
{
    delete ui;
}
void FootActive::initGraphics()
{
#ifdef CUSTOM_PAINTING
    this->repaint();
#endif
}

bool FootActive::handleNewMessage(PcuMessage * const message)
{


        static int previousPage = 0;


        if (message->messageType == CAN_DATA ){
            if(message->identifier == 0) {  //CAN ID 0x264
                if (message->data[0] == 2) {

                    previousPage = 1;
                }
                else {
                    previousPage = 0;
                }
            }
            else if(message->identifier == 4) { // CAN ID 0x564

                // --- ŞASE DENGE AÇILARI (X ve Y) KONTROLÜ ---
                static double lastXAngle = -999.0, lastYAngle = -999.0;
                static uint8_t lastDengeDurumu = 0xFF;
                bool isVisible = (message->data[5] & BIT_1) != 0;


                ui->X_Value->setVisible(isVisible);
                ui->Y_Value->setVisible(isVisible);
                ui->DengeTopu->setVisible(isVisible);
                ui->X_Arti_Bargraph->setVisible(isVisible);
                ui->X_Eksi_Bargraph->setVisible(isVisible);
                ui->Y_Arti_Bargraph->setVisible(isVisible);
                ui->Y_Eksi_Bargraph->setVisible(isVisible);
                ui->x_ui->setVisible(isVisible);
                ui->y_ui->setVisible(isVisible);

                if (isVisible) {
                    double xAngle = convertSignedValue(message->data[1], message->data[2]) / 10.0;
                    double yAngle = convertSignedValue(message->data[3], message->data[4]) / 10.0;
                    uint8_t dengeDurumu = message->data[5] & BIT_0;


                    if (xAngle != lastXAngle || yAngle != lastYAngle || dengeDurumu != lastDengeDurumu)
                    {
                        lastXAngle = xAngle;
                        lastYAngle = yAngle;
                        lastDengeDurumu = dengeDurumu;

                        // X ve Y acilari
                        ui->X_Value->setText( QString::number(xAngle, 'f', 1) + "°");
                        ui->Y_Value->setText( QString::number(yAngle, 'f', 1) + "°");

                        // MERKEZ TOP RENGİ KONTROLÜ
                        if (dengeDurumu) {
                            // Bit 1 ise (Dengede değil) -> Kırmızı
                            ui->DengeTopu->setStyleSheet("min-width: 15px; max-width: 15px; min-height: 15px; max-height: 15px; border: none; border-radius: 7px; background-color: #FF0000;");
                        } else {
                            // Bit 0 ise (Dengede) -> Yeşil
                            ui->DengeTopu->setStyleSheet("min-width: 15px; max-width: 15px; min-height: 15px; max-height: 15px; border: none; border-radius: 7px; background-color: #00FF00;");
                        }

                        // X EKSENİ BARLARI
                        if (xAngle >= 0.0) {
                            ui->X_Arti_Bargraph->setValue(static_cast<int>(xAngle));
                            ui->X_Eksi_Bargraph->setValue(0);
                        } else {
                            ui->X_Arti_Bargraph->setValue(0);
                            ui->X_Eksi_Bargraph->setValue(static_cast<int>(std::abs(xAngle)));
                        }

                        // Y EKSENİ BARLARI
                        if (yAngle >= 0.0) {
                            ui->Y_Arti_Bargraph->setValue(static_cast<int>(yAngle));
                            ui->Y_Eksi_Bargraph->setValue(0);
                        } else {
                            ui->Y_Arti_Bargraph->setValue(0);
                            ui->Y_Eksi_Bargraph->setValue(static_cast<int>(std::abs(yAngle)));
                        }
                    }
                }
            }


        }

        // 2. Switch durumunu kontrol ediyoruz
        if (message->messageType != CAN_DATA && message->identifier == PCU_DIGITAL) {


            if (!message->isDigitalActivated(4)) {
                emit changeView(previousPage);
            }
        }

        return true;
}

bool FootActive::handleNewButtonStatus(const ButtonStatus newButtonStatus){

    unsigned char buttons = newButtonStatus.all;
    sendCanMessage(0x223, &buttons, 1);
    return true;
}
