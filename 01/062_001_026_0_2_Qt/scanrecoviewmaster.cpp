#include "scanrecoviewmaster.h"
#include <QDebug>

enum {
    LED_ID = 0,
    VERSION_ID = 1,
};

ScanrecoViewMaster::ScanrecoViewMaster() :        
    ViewMaster() {

}

ScanrecoViewMaster::~ScanrecoViewMaster() {

}

int currentPage ; //Global olarak sayfa numarası tanımlaması için

void ScanrecoViewMaster::parseNewPcuMessage(PcuMessage * const newPcuMessage) {
	if(newPcuMessage->messageType == SYSTEM_DATA){

        currentPage = mCurrentViewIndex ; //Global olarak sayfa numarası tanımlaması için
    }
    else if(newPcuMessage->messageType == CAN_DATA) {
        // Handle data received via CAN
    }
}
void ScanrecoViewMaster::updateButtonStatus(ButtonStatus newButtonStatus) { 

}

//CanBus'tan gelen verileri word'den float'a çevirme işlemi
float convertSignedValue(int lowByte, int highByte){

    int value = lowByte + highByte * 256;
    if (value >= 32768){
        value -= 65536;
    }
    return (float) value / 10.0 ;

}


