#include "tek_kirma.h"
#include "ui_tek_kirma.h"
#include "scanrecoviewmaster.h"
#include "goruntu.h"
#include "rtcmanager.h"
#include <QtGui>
#include <QDebug>
#include <QSettings>

extern rtc_time publicTime;

//BITWISE Değişken tanımlamaları
const uint8_t BIT_0 = 0x01; // 00000001
const uint8_t BIT_1 = 0x02; // 00000010
const uint8_t BIT_2 = 0x04; // 00000100
const uint8_t BIT_3 = 0x08; // 00001000
const uint8_t BIT_4 = 0x10; // 00010000
const uint8_t BIT_5 = 0x20; // 00100000
const uint8_t BIT_6 = 0x40; // 01000000
const uint8_t BIT_7 = 0x80; // 10000000


tek_kirma::tek_kirma(QWidget *parent) :
    View(parent),
    ui(new Ui::tek_kirma)
{
    ui->setupUi(this);
}

tek_kirma::~tek_kirma()
{
    delete ui;
}

void tek_kirma::initGraphics()
{
    wifiProcess.start("/home/GUI/start_Wi-Fi");
    vc.ReadConfig(); // read settings.xml file

    QSettings settings("/home/GUI/brightness.ini", QSettings::IniFormat);

    bool isAuto = settings.value("Backlight/AutoMode", true).toBool();
    int savedLevel = settings.value("Backlight/Level", 50).toInt();

    if (isAuto) {
            emit setBacklightMode(true, 0);
        } else {
            emit setBacklightMode(false, savedLevel + 1);
        }

    #ifdef CUSTOM_PAINTING
        this->repaint();
    #endif

}

void tek_kirma::cyclicUpdate()
{

        QString saatStr = QString("%1:%2:%3")
                            .arg(publicTime.tm_hour, 2, 10, QChar('0'))
                            .arg(publicTime.tm_min, 2, 10, QChar('0'))
                            .arg(publicTime.tm_sec, 2, 10, QChar('0'));

        ui->labelSaat->setText(saatStr);


        QString tarihStr = QString("%1.%2.%3")
                            .arg(publicTime.tm_mday, 2, 10, QChar('0'))
                            .arg(publicTime.tm_mon + 1, 2, 10, QChar('0'))
                            .arg(publicTime.tm_year + 1900);

        ui->labelTarih->setText(tarihStr);
}

bool tek_kirma::handleNewMessage(PcuMessage * const message)
{
//DEĞİŞKEN TANIMLAMALARI
    int progressValue0 = message->data[0];
    int progressValue1 = message->data[1];

    QString alarm[] = {  "Acil Stop Basılı !",
                         "Uzaktan Kumanda Acil Stop Basılı!",
                         "Eeprom Okuma Hatası !",
                         "Eeprom Yazma Hatası !",
                         "Ana Bom Açı Sensörü Aralık Dısında !",
                         "Alarm 6 :Açıklama !",
                         "1. Kırma Açı Sensörü Aralık Dısında !",
                         "Alarm 8 :Açıklama !",
                         "2. Kırma Açı Sensörü Aralık Dısında !",
                         "Alarm 10 :Açıklama !",
                         "A.Bom Basınç Sensörü Adc Degeri Aralık Dısında !",
                         "1.Kırma Basınç Sensörü Adc Degeri Aralık Dısında !",
                         "2.Kırma Basınç Sensörü Adc Degeri Aralık Dısında !",
                         "Ekran Haberlesme Hatası !",
                         "Alarm 15 :Açıklama !",
                         "Joystick Haberlesme Hatası !",
                         "Uzaktan Kumanda Haberlesme Hatası!",
                         "Ana Bom Açı Sensörü Haberlesme Hatası !",
                         "1.Kırma Açı Sensörü Haberlesme Hatası !",
                         "2.Kırma Açı Sensörü Haberlesme Hatası !",
                         "Alarm 21 :Açıklama !",
                         "Alarm 22 :Açıklama !",
                         "Alarm 23 :Açıklama !",
                         "Alarm 24 :Açıklama !",
                         "Alarm 25 :Açıklama !",
                         "Sase Denge Sensörü Haberlesme Hatası !",
                         "Alarm 27 :Açıklama !",
                         "Alarm 28 :Açıklama !",
                         "Alarm 29 :Açıklama !",
                         "Emitek ID  Hatalı ! ",
                         "Alarm 31 :Açıklama !",
                         "Alarm 32 :Açıklama !",
                         "Bypass Aktif!",
                         "Bypass Bekleme Süresi !",
                         "Ana Bom Basınç Limiti Aktif !",
                         "1.Kırma Basınç Limiti Aktif !",
                         "2.Kırma Basınç Limiti Aktif !",
                         "Ana Bom Basınç Üst Limiti Aktif !",
                         "1.Kırma Basınç Üst Limiti Aktif !",
                         "2.Kırma Basınç Üst Limiti Aktif !",
                         "Halat Sonda Switch Aktif !",
                         "Palanga Switch Aktif!",
                         "Uyarı 11 : Açıklama !",
                         "Sase Dengede Degil!",
                         "Kabin Açık Degil !",
                         "Kabin Kapalı Degil !",
                         "Uyarı 15 : Açıklama !",
                         "Uyarı 16 : Açıklama !",
                         "Uyarı 17 : Açıklama !",
                         "Uyarı 18 : Açıklama !",
                         "Uyarı 19 : Açıklama !",
                         "Uyarı 20 : Açıklama !",
                         "Uyarı 21 : Açıklama !",
                         "Uyarı 22 : Açıklama !",
                         "Uyarı 23 : Açıklama !",
                         "Uyarı 24 : Açıklama !",
                         "Uyarı 25 : Açıklama !",
                         "Uyarı 26 : Açıklama !",
                         "Uyarı 27 : Açıklama !",
                         "Uyarı 28 : Açıklama !",
                         "Uyarı 29 : Açıklama !",
                         "Uyarı 30 : Açıklama !",
                         "Uyarı 31 : Açıklama !",
                         "Uyarı 32 : Açıklama !"
                        };





    if (message->messageType != CAN_DATA && message->identifier == PCU_DIGITAL) {


            int targetSwitchIndex = 4; //Switche gore degisir.


            if (message->isDigitalActivated(targetSwitchIndex)) {
                emit changeView(2);
            }


       }





    if(message->messageType == CAN_DATA){

        //ALARM-WARNING TEXT
        if(message->identifier == 0){  //CAN ID 0x264

            if(message->data[7] != 0){
                ui->mesaj->setVisible(true);
                for (int deger = 1; deger<64; deger++){
                    if(message->data[7] == deger){ //7.bytetan gelen veri
                        ui->mesaj->setText(alarm[deger-1]);
                    }
                }
            }
            else{
                ui->mesaj->setVisible(false);
            }

        }



        if(message->identifier == 0){   //CAN ID 0x264

            //SAYFA DEĞİŞİMİ
            //Tek Kırma Sayfası
            if((message->data[0] == 1)){ emit changeView(0); }

            //Çift Kırma Sayfası
            else if((message->data[0] == 2)){ emit changeView(1); }


            //BASINÇ VERİLERİ
            ui->P1BarDeger->setText(QString::number((int)(message->data[1] + message->data[2]*256)) + " Bar");
            ui->P2BarDeger->setText(QString::number((int)(message->data[3] + message->data[4]*256)) + " Bar");
         }
        //AÇI VERİLERİ
        else if(message->identifier == 1){  //CAN ID 0x464
            ui->MainboomAciValue->setText(QString::number(convertSignedValue(message->data[0] , message->data[1]),'f',1) + "°");
            ui->Acikirma1_deger->setText(QString::number(convertSignedValue(message->data[2] , message->data[3]),'f',1) + "°");
       }
        else if(message->identifier==4){ //CAN ID 0x564
            // --- ŞASE DENGE AÇILARI (X ve Y) KONTROLÜ ---
            static double lastXAngle = -999.0, lastYAngle = -999.0;


            // 2 baytlık veriler birleştirilip 10'a bölünerek gerçek açı elde ediliyor
            double xAngle = convertSignedValue(message->data[1], message->data[2]) / 10.0;
            double yAngle = convertSignedValue(message->data[3], message->data[4]) / 10.0;


            // X açısı, Y açısı veya Denge biti değiştiğinde UI güncellenir
            if (xAngle != lastXAngle || yAngle != lastYAngle )
            {
                lastXAngle = xAngle;
                lastYAngle = yAngle;

                //X ve Y acilari
                ui->X_Value->setText( QString::number(xAngle, 'f', 1) + "°");
                ui->Y_Value->setText( QString::number(yAngle, 'f', 1) + "°");
            }

          }

        //BARGRAPH VERİLERİ
        else if(message->identifier == 2){//CAN ID 0x364

            if(progressValue0 <= 100){
                ui->P1BarGraph->setValue(progressValue0);
                ui->P1BarGraph->setFormat(QString::number(progressValue0) + "%" );
            }
            else{
                ui->P1BarGraph->setValue(100);
                ui->P1BarGraph->setFormat(QString::number(progressValue0) + "%" );
            }


            if(progressValue1 <= 100){
                ui->P2BarGraph->setValue(progressValue1);
                ui->P2BarGraph->setFormat(QString::number(progressValue1) + "%" );
            }
            else{
                ui->P2BarGraph->setValue(100);
                ui->P2BarGraph->setFormat(QString::number(progressValue1) + "%" );
            }
        }

    }



    if(message->messageType == CAN_DATA){
        if(message->identifier == 2){   //CAN ID 0x364

            //*****************************************
            //0:Yeşil Ok ; 1:Gri Ok ; 2:Kırmızı Ok
            //true:Ok Açık ; false:Ok kapalı
            //*****************************************

            //Rotation Left
            if(message->data[3]&BIT_0){
                ui->ArrowRotationLeft_0->setVisible(false);
                ui->ArrowRotationLeft_2->setVisible(true);
            }
            else if(message->data[5]&BIT_0){
                ui->ArrowRotationLeft_0->setVisible(true);
                ui->ArrowRotationLeft_2->setVisible(false);
            }
            else{
                ui->ArrowRotationLeft_0->setVisible(false);
                ui->ArrowRotationLeft_2->setVisible(false);
            }
            //***********************************************

            //Rotation Right
            if(message->data[3]&BIT_1){
                ui->ArrowRotationRight_0->setVisible(false);
                ui->ArrowRotationRight_2->setVisible(true);
            }
            else if(message->data[5]&BIT_1){
                ui->ArrowRotationRight_0->setVisible(true);
                ui->ArrowRotationRight_2->setVisible(false);
            }
            else{
                ui->ArrowRotationRight_0->setVisible(false);
                ui->ArrowRotationRight_2->setVisible(false);
            }
            //***********************************************

            //Main Boom Up
            if(message->data[3]&BIT_2){
                ui->ArrowMainBoomUp_0->setVisible(false);
                ui->ArrowMainBoomUp_2->setVisible(true);
            }
            else if(message->data[5]&BIT_2){
                ui->ArrowMainBoomUp_0->setVisible(true);
                ui->ArrowMainBoomUp_2->setVisible(false);
            }
            else{
                ui->ArrowMainBoomUp_0->setVisible(false);
                ui->ArrowMainBoomUp_2->setVisible(false);
            }
            //***********************************************

            //Main Boom Down
            if(message->data[3]&BIT_3){
                ui->ArrowMainBoomDown_0->setVisible(false);
                ui->ArrowMainBoomDown_2->setVisible(true);
            }
            else if(message->data[5]&BIT_3){
                ui->ArrowMainBoomDown_0->setVisible(true);
                ui->ArrowMainBoomDown_2->setVisible(false);
            }
            else{
                ui->ArrowMainBoomDown_0->setVisible(false);
                ui->ArrowMainBoomDown_2->setVisible(false);
            }
            //***********************************************

            //First Boom Up
            if(message->data[3]&BIT_4){
                ui->ArrowFirstBoomUp_0->setVisible(false);
                ui->ArrowFirstBoomUp_2->setVisible(true);
            }
            else if(message->data[5]&BIT_4){
                ui->ArrowFirstBoomUp_0->setVisible(true);
                ui->ArrowFirstBoomUp_2->setVisible(false);
            }
            else{
                ui->ArrowFirstBoomUp_0->setVisible(false);
                ui->ArrowFirstBoomUp_2->setVisible(false);
            }
            //***********************************************

            //First Boom Down
            if(message->data[3]&BIT_5){
                ui->ArrowFirstBoomDown_0->setVisible(false);
                ui->ArrowFirstBoomDown_2->setVisible(true);
            }
            else if(message->data[5]&BIT_5){
                ui->ArrowFirstBoomDown_0->setVisible(true);
                ui->ArrowFirstBoomDown_2->setVisible(false);
            }
            else{
                ui->ArrowFirstBoomDown_0->setVisible(false);
                ui->ArrowFirstBoomDown_2->setVisible(false);
            }
            //***********************************************

            //First Telescope In
            if(message->data[3]&BIT_6){
                ui->ArrowFirstTelescopeIn_0->setVisible(false);
                ui->ArrowFirstTelescopeIn_2->setVisible(true);
            }
            else if(message->data[5]&BIT_6){
                ui->ArrowFirstTelescopeIn_0->setVisible(true);
                ui->ArrowFirstTelescopeIn_2->setVisible(false);
            }
            else{
                ui->ArrowFirstTelescopeIn_0->setVisible(false);
                ui->ArrowFirstTelescopeIn_2->setVisible(false);
            }
            //***********************************************

            //First Telescope Out
            if(message->data[3]&BIT_7){
                ui->ArrowFirstTelescopeOut_0->setVisible(false);
                ui->ArrowFirstTelescopeOut_2->setVisible(true);
            }
            else if(message->data[5]&BIT_7){
                ui->ArrowFirstTelescopeOut_0->setVisible(true);
                ui->ArrowFirstTelescopeOut_2->setVisible(false);
            }
            else{
                ui->ArrowFirstTelescopeOut_0->setVisible(false);
                ui->ArrowFirstTelescopeOut_2->setVisible(false);
            }
            //***********************************************

            //Winch Up
            if(message->data[4]&BIT_4){
                ui->ArrowWinchUp_0->setVisible(false);
                ui->ArrowWinchUp_2->setVisible(true);
            }
            else if(message->data[6]&BIT_4){
                ui->ArrowWinchUp_0->setVisible(true);
                ui->ArrowWinchUp_2->setVisible(false);
            }
            else{
                ui->ArrowWinchUp_0->setVisible(false);
                ui->ArrowWinchUp_2->setVisible(false);
            }
            //***********************************************

            //Winch Down
            if(message->data[4]&BIT_5){
                ui->ArrowWinchDown_0->setVisible(false);
                ui->ArrowWinchDown_2->setVisible(true);
            }
            else if(message->data[6]&BIT_5){
                ui->ArrowWinchDown_0->setVisible(true);
                ui->ArrowWinchDown_2->setVisible(false);
            }
            else{
                ui->ArrowWinchDown_0->setVisible(false);
                ui->ArrowWinchDown_2->setVisible(false);
            }
            //***********************************************

            //-------------------- GÖRSELLER ------------------------------

            //BYPASS-------------------------------------------------------
            if(!(message->data[7]&BIT_2)){
                ui->Bypass_0->setVisible(true);
                ui->Bypass_1->setVisible(false);
            }
            else if ((message->data[7]&BIT_2)){
                ui->Bypass_0->setVisible(false);
                ui->Bypass_1->setVisible(true);
            }
            //*************************************************************


        }
    }

    else if(message->messageType == SYSTEM_DATA)
        {
            if(message->identifier == PCU_STATUS)
            {

                if(message->length == 2 || message->length == 3)
                        {
                            uint8_t newBattery = message->getBattery(); // 0 ile 15 arası değer gelir

                            // 0-15 aralığını standart 0-100 yüzdesine çeviriyoruz
                            uint8_t yuzde = (newBattery * 100) / 15;

                            // Olası bir hatalı veriye karşı sınırı aşmasını engelliyoruz
                            if(yuzde > 100) yuzde = 100;

                            ui->progressBarBatarya->setValue(yuzde);

                            // Seviyeye göre renk belirleme
                            QString chunkColor;
                            if (yuzde > 50) chunkColor = "#4CAF50";      // Yeşil
                            else if (yuzde > 20) chunkColor = "#FFC107"; // Sarı
                            else chunkColor = "#F44336";                 // Kırmızı

                            // Batarya tasarımı ve dinamik renk (Çalışan güncel stil)
                            QString style = QString(
                                "QProgressBar {"
                                "   border: 3px solid white;"
                                "   background: #333333;"
                                "   text-align: center;"
                                "   color: white;"
                                "   font-weight: bold;"
                                "}"
                                "QProgressBar::chunk {"
                                "   background-color: %1;"
                                "   margin: 1px;"
                                "}"
                            ).arg(chunkColor);

                            ui->progressBarBatarya->setStyleSheet(style);
                        }
               }
            }


    return true;
}

bool tek_kirma::handleNewButtonStatus(const ButtonStatus newButtonStatus) {

    unsigned char buttons = newButtonStatus.all;
    sendCanMessage(0x223, &buttons, 1);
    if(newButtonStatus.button1){
        emit changeView(3);
    }
    else if (newButtonStatus.button7){
        emit changeView(4);
    }


    return true;
}




