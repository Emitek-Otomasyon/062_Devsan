#ifndef FOOTACTIVE_H
#define FOOTACTIVE_H

#include <view.h>
#include <QProcess>
#include <qprocess.h>

namespace Ui {
class FootActive;
}

class FootActive : public View
{
    Q_OBJECT

public:
    explicit FootActive(QWidget *parent = 0);
    ~FootActive();

private:
    Ui::FootActive *ui;

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

#endif // FOOTACTIVE_H
