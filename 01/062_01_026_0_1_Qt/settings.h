#ifndef SETTINGS_H
#define SETTINGS_H

#include <view.h>
#include <QProcess>

namespace Ui {
class Settings;
}

class Settings : public View
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = 0);
    ~Settings();

private:

    Ui::Settings *ui;
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

    enum RtcEditState {
        EDIT_NONE = 0,
        EDIT_HOUR,
        EDIT_MINUTE,
        EDIT_DAY,
        EDIT_MONTH,
        EDIT_YEAR
    };
    RtcEditState currentEditState;

private slots:
    void cyclicUpdate();

};

#endif // SETTINGS_H
