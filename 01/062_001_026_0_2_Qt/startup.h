#ifndef STARTUP_H
#define STARTUP_H

//#include <QWidget>
#include <view.h>
#include <QProcess>


namespace Ui {
class startup;
}

class startup : public View
{
    Q_OBJECT

public:
    explicit startup(QWidget *parent = 0);
    ~startup();

private:
    Ui::startup *ui;

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


};

#endif // STARTUP_H
