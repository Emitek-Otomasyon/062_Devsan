#include "cift_kirma.h"
#include "ui_cift_kirma.h"
#include "scanrecoviewmaster.h"
#include "goruntu.h"
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

cift_kirma::cift_kirma(QWidget *parent) :
    View(parent),
    ui(new Ui::cift_kirma)
{
    ui->setupUi(this);
}

cift_kirma::~cift_kirma()
{
    delete ui;
}

void cift_kirma::initGraphics()
{
#ifdef CUSTOM_PAINTING
    this->repaint();
#endif
}

bool cift_kirma::handleNewMessage(PcuMessage * const message)
{
//DEĞİŞKEN TANIMLAMALARI
    int progressValue0 = message->data[0];
    int progressValue1 = message->data[1];
    int progressValue2 = message->data[2];

    QString alarm[] = {  "Kule Acil Stop Basili ",
                         "Ana Bom Aci Sensoru Gercek Degeri Aralik Disinda",
                         "Aci Sensörü Haberlesme Hatası! ",
                         "1.Kirma Aci Sensoru Aralik Disinda ",
                         "2.Kirma Aci Sensoru Aralik Disinda. ",
                         "1.Kirma Aci Sensoru Haberlesme Hatasi !",
                         "2.Kirma Aci Sensoru Haberlesme Hatasi !",
                         "Ana Bom Basinc Sensoru Aralik Disinda !",
                         "1.Kirma Bom Basinc Sensoru Aralik Disinda !",
                         "2.Kirma Bom Basinc Sensoru Aralik Disinda !",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "Sase Denge Sensoru Haberlesme Hatasi",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "Bypass Aktif",
                         "Bypass izni Yok",
                         "Ana Bom Limit asildi",
                         "1.Kirma Bom Limit asildi",
                         "2.Kirma Bom Limit asildi",
                         "Ana Bom Ust Limit asildi",
                         "Kirma Bom Ust Limit asildi",
                         "2.Kirma Bom Ust Limit asildi",
                         "Halat Sonda Switch Aktif",
                         "Palanga Switch Aktif",
                         "Ayaklar Basili Degil",
                         "Kabin Ekrani Haberlesme Hatasi!",
                         "",
                         "",
                         "",
                         "Uzaktan Kumanda Haberlesme Hatasi !",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         ""
                        };



    if (message->messageType != CAN_DATA && message->identifier == PCU_DIGITAL) {


            int targetSwitchIndex = 4;

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
            else {
                ui->mesaj->setVisible(false);
            }
        }


        if(message->identifier == 0){   //CAN ID 0x264

            //SAYFA DEĞİŞİMİ
            //Tek Kırma Sayfası
            if((message->data[0] == 1)){ emit changeView(0); }

            //Çift Kırma Sayfası
            else if((message->data[0] == 2)){ emit changeView(1); }



            //else if((message->data[0] == 2)){ emit changeView(1); }
            //else if((message->data[0] == 3)){ emit changeView(2); }

            ui->P1BarDeger->setText(QString::number((int)(message->data[1] + message->data[2]*256)) + " Bar");
            ui->P2BarDeger->setText(QString::number((int)(message->data[3] + message->data[4]*256)) + " Bar");
            ui->P3BarDeger->setText(QString::number((int)(message->data[5] + message->data[6]*256)) + " Bar");
         }
        //AÇI VERİLERİ
        else if(message->identifier == 1){  //CAN ID 0x464
           ui->MainboomAciValue->setText(QString::number(convertSignedValue(message->data[0] , message->data[1]),'f',1) + "°");
           ui->Acikirma1_deger->setText(QString::number(convertSignedValue(message->data[2] , message->data[3]),'f',1) + "°");
           ui->Acikirma2_deger->setText(QString::number(convertSignedValue(message->data[4] , message->data[5]),'f',1) + "°");

        }
        //BARGRAPH VERİLERİ
        else if(message->identifier == 2){ //CAN ID 0x364

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
            if(progressValue2 <= 100){
                ui->P3BarGraph->setValue(progressValue2);
                ui->P3BarGraph->setFormat(QString::number(progressValue2) + "%" );
            }
            else{
                ui->P3BarGraph->setValue(100);
                ui->P3BarGraph->setFormat(QString::number(progressValue2) + "%" );
            }
        }
    }


    //CAN VERİLERİ
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

            //Jib Boom Up
            if(message->data[4]&BIT_0){
                ui->ArrowJibBoomUp_0->setVisible(false);
                ui->ArrowJibBoomUp_2->setVisible(true);
            }
            else if(message->data[6]&BIT_0){
                ui->ArrowJibBoomUp_0->setVisible(true);
                ui->ArrowJibBoomUp_2->setVisible(false);
            }
            else{
                ui->ArrowJibBoomUp_0->setVisible(false);
                ui->ArrowJibBoomUp_2->setVisible(false);
            }
            //***********************************************

            //Jib Boom Down
            if(message->data[4]&BIT_1){
                ui->ArrowJibBoomDown_0->setVisible(false);
                ui->ArrowJibBoomDown_2->setVisible(true);
            }
            else if(message->data[6]&BIT_1){
                ui->ArrowJibBoomDown_0->setVisible(true);
                ui->ArrowJibBoomDown_2->setVisible(false);
            }
            else{
                ui->ArrowJibBoomDown_0->setVisible(false);
                ui->ArrowJibBoomDown_2->setVisible(false);
            }
            //***********************************************

            //Jib Telescope In
            if(message->data[4]&BIT_2){
                ui->ArrowJibTelescopeIn_0->setVisible(false);
                ui->ArrowJibTelescopeIn_2->setVisible(true);
            }
            else if(message->data[6]&BIT_2){
                ui->ArrowJibTelescopeIn_0->setVisible(true);
                ui->ArrowJibTelescopeIn_2->setVisible(false);
            }
            else{
                ui->ArrowJibTelescopeIn_0->setVisible(false);
                ui->ArrowJibTelescopeIn_2->setVisible(false);
            }
            //***********************************************

            //Jib Telescope Out
            if(message->data[4]&BIT_3){
                ui->ArrowJibTelescopeOut_0->setVisible(false);
                ui->ArrowJibTelescopeOut_2->setVisible(true);
            }
            else if(message->data[6]&BIT_3){
                ui->ArrowJibTelescopeOut_0->setVisible(true);
                ui->ArrowJibTelescopeOut_2->setVisible(false);
            }
            else{
                ui->ArrowJibTelescopeOut_0->setVisible(false);
                ui->ArrowJibTelescopeOut_2->setVisible(false);
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

    return true;
}

bool cift_kirma::handleNewButtonStatus(const ButtonStatus newButtonStatus) {

    unsigned char buttons = newButtonStatus.all;
    sendCanMessage(0x223, &buttons, 1);

    return true;
}


