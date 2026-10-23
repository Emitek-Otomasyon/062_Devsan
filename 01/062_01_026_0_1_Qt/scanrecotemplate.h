#ifndef SCANRECOTEMPLATE_H
#define SCANRECOTEMPLATE_H


#include <view.h>
#include <QProcess>
#include <QTimer>

namespace Ui {
class ScanrecoTemplate;
}

class ScanrecoTemplate : public View
{
    Q_OBJECT

public:
    explicit ScanrecoTemplate(QWidget *parent = 0);
    ~ScanrecoTemplate();

private:
    Ui::ScanrecoTemplate *ui;

private slots:
    void updateCounter();




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

#endif // SCANRECOTEMPLATE_H





