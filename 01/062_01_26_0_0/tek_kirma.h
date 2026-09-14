#ifndef TEK_KIRMA_H
#define TEK_KIRMA_H


#include <view.h>
#include <QProcess>
#include <qprocess.h>



namespace Ui {
class tek_kirma;
}

class tek_kirma : public View
{
    Q_OBJECT



public:
    explicit tek_kirma(QWidget *parent = 0);
    ~tek_kirma();


private:
    Ui::tek_kirma *ui;



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

#endif // TEK_KIRMA_H
