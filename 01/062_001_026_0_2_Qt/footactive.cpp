#include "footactive.h"
#include "ui_footactive.h"
#include "scanrecoviewmaster.h"
#include <QtGui>
#include <QDebug>

FootActive::FootActive(QWidget *parent) :
    View(parent),
    ui(new Ui::FootActive)
{
    ui->setupUi(this);
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

    // Nereye döneceğimizi aklında tutacak değişken (Varsayılan 0: Tek Kırma)
        static int previousPage = 0;

        // 1. Arka planda CAN mesajını dinleyip döneceğimiz sayfayı güncelliyoruz
        if (message->messageType == CAN_DATA && message->identifier == 0) {
            if (message->data[0] == 2) {
                previousPage = 1;
            } else {
                previousPage = 0;
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
