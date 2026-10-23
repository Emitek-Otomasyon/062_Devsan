#ifndef GORUNTU_H
#define GORUNTU_H

#include <view.h>
#include <QProcess>
#include "qprocess.h"
#include "view_camera.h"

namespace Ui {
class goruntu;
}

class goruntu : public View
{
    Q_OBJECT

public:
    explicit goruntu(QWidget *parent = 0);
    ~goruntu();

private:
    Ui::goruntu *ui;

private:
    unsigned char timer_cam;
    unsigned char num_telecamera;
    unsigned char camera_attiva;
    void stopStreaming(void);
    void ReadConfig(void);
    void startCamera(unsigned short int p_camera, unsigned short int p_display, bool p_enableScale, bool p_center, int p_latenza);
    QProcess wifiProcess, streamingProcess, killerProcess;
    View_Camera vc;
    int kirmaTipi = -1;//-1: Henüz bilinmiyor, 0: Tek Kırma, 1: Çift Kırma, 2: Ayak






    /*************************************************************
     *
     * @fn      initGraphics
     *
     * @brief   initializes graphics for the view
     *
     * @return  void
     *
     *************************************************************/
    void initGraphics();

    /*************************************************************
     *
     * @fn      cyclicUpdate
     *
     * @brief   called once every second
     *
     *************************************************************/
    void cyclicUpdate();

    /*************************************************************
     *
     * @fn      handleNewMessage
     *
     * @brief   handles new SPI message
     *
     * @param   SpiMessage * const dataMessage
     *      pointer to the SPI message to handle
     *
     * @return  bool
     *
     *************************************************************/
    bool handleNewMessage(PcuMessage * const dataMessage);

    /*************************************************************
     *
     * @fn      handleNewButtonStatus
     *
     * @brief   handles new button status
     *
     * @param   const unsigned char newButtonStatus
     *      new push button status
     *
     * @return  bool
     *
     *************************************************************/
    bool handleNewButtonStatus(const ButtonStatus newButtonStatus);


};

#endif // GORUNTU_H
