#include "scanrecoviewmaster.h"
#include <QDebug>
extern "C" {
    #include "rtc.h"
}
#include "rtcmanager.h"

rtc_time publicTime;
enum {
    LED_ID = 0,
    VERSION_ID = 1,
};

ScanrecoViewMaster::ScanrecoViewMaster() :        
    ViewMaster() {

}

ScanrecoViewMaster::~ScanrecoViewMaster() {

}
void ScanrecoViewMaster::handleRtcData(rtc_time * rtcTime)
{

   publicTime.tm_hour = rtcTime->tm_hour;
   publicTime.tm_min  = rtcTime->tm_min;
   publicTime.tm_sec  = rtcTime->tm_sec;
   publicTime.tm_mday = rtcTime->tm_mday;
   publicTime.tm_mon  = rtcTime->tm_mon;
   publicTime.tm_year = rtcTime->tm_year;
}

int currentPage ; //Global olarak sayfa numarası tanımlaması için

void ScanrecoViewMaster::parseNewPcuMessage(PcuMessage * const newPcuMessage) {
    static uint8_t delayTimer = 0;

       // Her 10 döngüde bir saati donanımdan talep et
       if(delayTimer++ > 10){
          getRtcTime();
          delayTimer = 0;
       }


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


