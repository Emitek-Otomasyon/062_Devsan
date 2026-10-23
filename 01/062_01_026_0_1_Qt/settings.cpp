#include "settings.h"
#include "ui_settings.h"
#include "scanrecoviewmaster.h"
#include "rtcmanager.h"
#include <fcntl.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <QSettings>
#include <QtGui>
#include <QDebug>

extern rtc_time publicTime;

Settings::Settings(QWidget *parent) :
    View(parent),
    ui(new Ui::Settings)
{

    ui->setupUi(this);
    currentEditState = EDIT_DAY;
}

Settings::~Settings()
{
    delete ui;
}

void Settings::initGraphics()
{
        QSettings settings("/home/GUI/brightness.ini", QSettings::IniFormat);



        bool isAuto = settings.value("Backlight/AutoMode", true).toBool();
        int savedLevel = settings.value("Backlight/Level", 50).toInt();

        // 1. Arayüzü (UI) Güncelle
        ui->checkBox->setChecked(isAuto);
        ui->horizontalSlider->setValue(savedLevel);
        ui->horizontalSlider->setEnabled(!isAuto);

        // 2. Donanımın Parlaklığını Güncelle
        if (isAuto) {
            emit setBacklightMode(true, 0);
        } else {
            emit setBacklightMode(false, savedLevel + 1);
        }

        #ifdef CUSTOM_PAINTING
            this->repaint();
        #endif
}

void Settings::cyclicUpdate()
{
    // Hangi değerin seçili olduğuna göre renkleri belirliyoruz
    QString hColor = (currentEditState == EDIT_HOUR) ? "#FFC107" : "black"; // Sarı veya Siyah
    QString mColor = (currentEditState == EDIT_MINUTE) ? "#FFC107" : "black";
    QString dColor = (currentEditState == EDIT_DAY) ? "#FFC107" : "black";
    QString moColor = (currentEditState == EDIT_MONTH) ? "#FFC107" : "black";
    QString yColor = (currentEditState == EDIT_YEAR) ? "#FFC107" : "black";

    // SAAT Formatı
    QString saatStr = QString("<font color='%1'>%2</font>:<font color='%3'>%4</font>:<font color='black'>%5</font>")
                        .arg(hColor)
                        .arg(publicTime.tm_hour, 2, 10, QChar('0'))
                        .arg(mColor)
                        .arg(publicTime.tm_min, 2, 10, QChar('0'))
                        .arg(publicTime.tm_sec, 2, 10, QChar('0'));

    ui->labelSaat->setTextFormat(Qt::RichText);
    ui->labelSaat->setText(saatStr);

    // TARİH Formatı
    QString tarihStr = QString("<font color='%1'>%2</font>.<font color='%3'>%4</font>.<font color='%5'>%6</font>")
                        .arg(dColor)
                        .arg(publicTime.tm_mday, 2, 10, QChar('0'))
                        .arg(moColor)
                        .arg(publicTime.tm_mon + 1, 2, 10, QChar('0'))
                        .arg(yColor)
                        .arg(publicTime.tm_year + 1900);

    ui->labelTarih->setTextFormat(Qt::RichText);
    ui->labelTarih->setText(tarihStr);
}

bool Settings::handleNewMessage(PcuMessage * const message)
{
    Q_UNUSED(message);//uyarı vermesin diye
    return true;
}

bool Settings::handleNewButtonStatus(const ButtonStatus newButtonStatus)
{
    static bool lastBtn1 = false; // Checkbox (Auto/Manuel) geçişi
    static bool lastBtn2 = false; // Parlaklık Artır
    static bool lastBtn3 = false; // Parlaklık Azalt
    static bool lastBtn4 = false; // Geri Dönüş
    static bool lastBtn5 = false; // Menüde İleri
    static bool lastBtn6 = false; // Menüde Geri
    static bool lastBtn7 = false; // Değeri Artır (+)
    static bool lastBtn8 = false; // Değeri Azalt (-)

    int sliderVal = ui->horizontalSlider->value();

    //  Otomatik / Manuel Mod Geçişi
    if (newButtonStatus.button1 && !lastBtn1) {
        if(ui->checkBox->isChecked()) {
            ui->horizontalSlider->setEnabled(true);
            ui->checkBox->setChecked(false);
            emit setBacklightMode(false, ui->horizontalSlider->value() + 1); // Manuel değer gönder
        } else {
            ui->horizontalSlider->setEnabled(false);
            ui->checkBox->setChecked(true);
            emit setBacklightMode(true, 0); // Otomatik sensör modunu aç
        }
        QSettings settings("/home/GUI/brightness.ini", QSettings::IniFormat);
        settings.setValue("Backlight/AutoMode", false);
        settings.setValue("Backlight/Level", sliderVal);
        settings.sync();
    }
    lastBtn1 = newButtonStatus.button1;

    //  Parlaklık Artırma
    if (newButtonStatus.button2 && !lastBtn2) {
        ui->horizontalSlider->setEnabled(true);
        ui->checkBox->setChecked(false); // Manuel müdahale edildiği için oto modu kapat

        if (sliderVal < ui->horizontalSlider->maximum()) {
            ++sliderVal;
            ui->horizontalSlider->setValue(sliderVal);
            emit setBacklightMode(false, sliderVal + 1);

            QSettings settings("/home/GUI/brightness.ini", QSettings::IniFormat);
            settings.setValue("Backlight/AutoMode", false);
            settings.setValue("Backlight/Level", sliderVal);
            settings.sync();
        }
    }
    lastBtn2 = newButtonStatus.button2;

    // Parlaklık Azaltma
    if (newButtonStatus.button3 && !lastBtn3) {
        ui->horizontalSlider->setEnabled(true);
        ui->checkBox->setChecked(false); // Manuel müdahale edildiği için oto modu kapat

        if (sliderVal > ui->horizontalSlider->minimum()) {
            --sliderVal;
            ui->horizontalSlider->setValue(sliderVal);
            emit setBacklightMode(false, sliderVal + 1);
            QSettings settings("/home/GUI/brightness.ini", QSettings::IniFormat);
            settings.setValue("Backlight/AutoMode", false);
            settings.setValue("Backlight/Level", sliderVal);
            settings.sync();
        }
    }
    lastBtn3 = newButtonStatus.button3;

    // Ana Ekrana Geri Dönüş
    if (newButtonStatus.button4 && !lastBtn4) {
        emit changeView(0);
    }
    lastBtn4 = newButtonStatus.button4;

    //  Seçimi İleri Taşı (Aşağı/İleri gezinme)
    if (newButtonStatus.button5 && !lastBtn5) {
        currentEditState = static_cast<RtcEditState>((currentEditState + 1) % 6);
    }
    lastBtn5 = newButtonStatus.button5;

    //  Seçimi Geri Taşı (Yukarı/Geri gezinme)
    if (newButtonStatus.button6 && !lastBtn6) {
        if (currentEditState == EDIT_NONE) currentEditState = EDIT_YEAR;
        else currentEditState = static_cast<RtcEditState>(currentEditState - 1);
    }
    lastBtn6 = newButtonStatus.button6;

    //  Seçili Değeri Artır (+)
    if (newButtonStatus.button7 && !lastBtn7) {
        if (currentEditState == EDIT_HOUR) publicTime.tm_hour = (publicTime.tm_hour + 1) % 24;
        else if (currentEditState == EDIT_MINUTE) publicTime.tm_min = (publicTime.tm_min + 1) % 60;
        else if (currentEditState == EDIT_DAY) {
            publicTime.tm_mday++;
            if(publicTime.tm_mday > 31) publicTime.tm_mday = 1;
        }
        else if (currentEditState == EDIT_MONTH) {
            publicTime.tm_mon++;
            if(publicTime.tm_mon > 11) publicTime.tm_mon = 0;
        }
        else if (currentEditState == EDIT_YEAR) publicTime.tm_year++;

        if (currentEditState != EDIT_NONE) {
            int fd = open("/dev/rtc0", O_RDWR);
            if (fd >= 0) {
                ioctl(fd, RTC_SET_TIME, &publicTime);
                ::close(fd);
            }
        }
    }
    lastBtn7 = newButtonStatus.button7;

    // Seçili Değeri Azalt (-)
    if (newButtonStatus.button8 && !lastBtn8) {
        if (currentEditState == EDIT_HOUR) {
            if (publicTime.tm_hour == 0) publicTime.tm_hour = 23;
            else publicTime.tm_hour--;
        }
        else if (currentEditState == EDIT_MINUTE) {
            if (publicTime.tm_min == 0) publicTime.tm_min = 59;
            else publicTime.tm_min--;
        }
        else if (currentEditState == EDIT_DAY) {
            if (publicTime.tm_mday <= 1) publicTime.tm_mday = 31;
            else publicTime.tm_mday--;
        }
        else if (currentEditState == EDIT_MONTH) {
            if (publicTime.tm_mon == 0) publicTime.tm_mon = 11;
            else publicTime.tm_mon--;
        }
        else if (currentEditState == EDIT_YEAR) {
            publicTime.tm_year--;
        }

       //Degisikligi donanıma yazma
        if (currentEditState != EDIT_NONE) {
            int fd = open("/dev/rtc0", O_RDWR);
            if (fd >= 0) {
                ioctl(fd, RTC_SET_TIME, &publicTime);
                ::close(fd);
            }
        }
    }
    lastBtn8 = newButtonStatus.button8;

    return true;
}
