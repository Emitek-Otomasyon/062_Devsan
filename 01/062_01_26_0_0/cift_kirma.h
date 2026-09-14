#ifndef CIFT_KIRMA_H
#define CIFT_KIRMA_H

//#include <QWidget>
#include <view.h>
#include <QProcess>

namespace Ui {
class cift_kirma;
}

class cift_kirma : public View
{
    Q_OBJECT

public:
    explicit cift_kirma(QWidget *parent = 0);
    ~cift_kirma();

private:
    Ui::cift_kirma *ui;

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

#endif // CIFT_KIRMA_H
