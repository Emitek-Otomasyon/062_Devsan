#ifndef VIEW_CAMERA_H
#define VIEW_CAMERA_H

#include <QString>
#include <qprocess.h>
#include <QFile>
#include <qxmlstream.h>

class Q_DECL_EXPORT View_Camera
{

private:
    unsigned short int camera = 0;
    QString SSID_NAME = "";
    unsigned short int channel = 1;
    bool station = false;
    QString IPAddressCamera1, IPAddressCamera2, IPAddressCamera3, IPAddressCamera4;
    bool data_ready;
    QString ownIp;
    QProcess pingProcess;
    unsigned short int flip[4];
    bool check_ping;

public:
    View_Camera();
    /* Read wi-fi and camera parameters */
    bool ReadConfig(void);
    /* String to camera */
    QString getLaunchString(unsigned short int camera_num, unsigned short int size, bool scale,  bool center, unsigned int latenza);
    /* Initialize First Ping Camera System from configuration data */
    bool InitPing(void);
    /* Returns true if Camera System is ready (network and camera are up) */
    bool isReady(unsigned short int camera_num);
    /* Accessors */
    int getNumCams() { return camera; }
    QString getSsid() { return SSID_NAME; }
};

#endif // VIEW_CAMERA_H
