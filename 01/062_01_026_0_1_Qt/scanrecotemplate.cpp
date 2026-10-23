#include "scanrecotemplate.h"
#include "ui_scanrecotemplate.h"
#include <QtGui>
#include <QDebug>
#include <QTimer>


//BITWISE Değişken tanımlamaları
const uint8_t BIT_0 = 0x01; // 00000001
const uint8_t BIT_1 = 0x02; // 00000010
const uint8_t BIT_2 = 0x04; // 00000100
const uint8_t BIT_3 = 0x08; // 00001000
const uint8_t BIT_4 = 0x10; // 00010000
const uint8_t BIT_5 = 0x20; // 00100000
const uint8_t BIT_6 = 0x40; // 01000000
const uint8_t BIT_7 = 0x80; // 10000000



ScanrecoTemplate::ScanrecoTemplate(QWidget *parent) :
    View(parent),
    ui(new Ui::ScanrecoTemplate)
{
    ui->setupUi(this);

}


QTimer *timer;
ScanrecoTemplate::~ScanrecoTemplate()
{
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &ScanrecoTemplate::updateCounter);
    timer->start(50); // 50ms aralıklarla çalışır
    //************************************************************************
    delete ui;
}

int value = 0;
bool button1status = false;

bool ScanrecoTemplate::handleNewButtonStatus(const ButtonStatus newButtonStatus) {
    button1status = newButtonStatus.button1;
    if (button1status) {
        value ++;
    }
//    else if (!button1status) {
//        value = 0;
//    }
    ui->sayac->setText(QString::number((int)(value)));
    return true;
}

void ScanrecoTemplate::updateCounter() {
//    if (newButtonStatus.button1) {
//        value++;
//        ui->sayac->setText(QString::number(value));
//    }
}



void ScanrecoTemplate::initGraphics()
{
#ifdef CUSTOM_PAINTING
    this->repaint();
#endif
}


//int value = 0;
//bool lastButton1Status = false;
//bool ScanrecoTemplate::handleNewButtonStatus(const ButtonStatus newButtonStatus) {

//    if(newButtonStatus.button1 && !lastButton1Status){
//    value++;
//    }
//    else if(!newButtonStatus.button1) { value = 0; }
//    lastButton1Status = newButtonStatus.button1;

//    ui->sayac->setText(QString::number((int)(value)));
//    return true;
//}



