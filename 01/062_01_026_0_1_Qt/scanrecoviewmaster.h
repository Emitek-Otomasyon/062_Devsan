#ifndef SCANRECOVIEWMASTER_H
#define SCANRECOVIEWMASTER_H

#include "viewmaster.h"


float convertSignedValue(int lowByte, int highByte);

extern int currentPage; //Global olarak sayfa numarası tanımlaması için

/*****************************************************************
 *
 * @class   ScanrecoViewMaster
 *
 * @base    ViewMaster
 *
 * @brief   class for view manager
 *
 *****************************************************************/
class ScanrecoViewMaster : public ViewMaster {
public:
    /*************************************************************
     *
     * @fn      ScanrecoViewMaster
     *
     * @brief   constructor
     *
     *************************************************************/
    ScanrecoViewMaster();
    /*************************************************************
     *
     * @fn      ~ScanrecoViewMaster
     *
     * @brief   destructor
     *
     *************************************************************/
    ~ScanrecoViewMaster();
    float convertSignedValue(int lowByte, int highByte);

protected:
    /*************************************************************
     *
     * @fn      parseNewPcuMessage
     *
     * @brief   called when new SPI message has been
     *      received
     *
     * @param   SpiMessage * const newSpiMessage
     *      the SPI message to handle
     *
     * @return  void
     *
     *************************************************************/
    void parseNewPcuMessage(PcuMessage * const newPcuMessage);

public slots:
    /*************************************************************
     *
     * @fn      updateButtonStatus
     *
     * @brief   connected to button manager, called
     *      when new button status has been received
     *
     * @param   unsigned char newButtonStatus
     *      the new button status
     *
     * @return  void
     *
     *************************************************************/
    void updateButtonStatus(ButtonStatus newButtonStatus);
    void handleRtcData(rtc_time *rtcTime);
};

#endif
