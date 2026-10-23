/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QLabel *background;
    QLabel *labelBacklightMinus;
    QCheckBox *checkBox;
    QLabel *labelBacklightPlus;
    QLabel *labelTarih;
    QLabel *label;
    QLabel *labelSaat;
    QLabel *labelTarihtText;
    QLabel *labelSaatText;
    QLabel *leftbt;
    QLabel *rightbt;
    QSlider *horizontalSlider;
    QLabel *increasebt;
    QLabel *decreasebt;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(480, 272);
        background = new QLabel(Settings);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 0, 480, 272));
        background->setStyleSheet(QStringLiteral("background:white;"));
        labelBacklightMinus = new QLabel(Settings);
        labelBacklightMinus->setObjectName(QStringLiteral("labelBacklightMinus"));
        labelBacklightMinus->setGeometry(QRect(10, 160, 101, 17));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Mono"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        labelBacklightMinus->setFont(font);
        labelBacklightMinus->setStyleSheet(QStringLiteral("color:black;"));
        checkBox = new QCheckBox(Settings);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 10, 121, 31));
        checkBox->setFont(font);
        checkBox->setStyleSheet(QStringLiteral("color:black;"));
        checkBox->setIconSize(QSize(20, 20));
        checkBox->setCheckable(true);
        checkBox->setChecked(false);
        labelBacklightPlus = new QLabel(Settings);
        labelBacklightPlus->setObjectName(QStringLiteral("labelBacklightPlus"));
        labelBacklightPlus->setGeometry(QRect(10, 90, 101, 17));
        labelBacklightPlus->setFont(font);
        labelBacklightPlus->setStyleSheet(QStringLiteral("color:black;"));
        labelTarih = new QLabel(Settings);
        labelTarih->setObjectName(QStringLiteral("labelTarih"));
        labelTarih->setGeometry(QRect(245, 240, 91, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu Mono"));
        labelTarih->setFont(font1);
        labelTarih->setStyleSheet(QStringLiteral("color:black;"));
        labelTarih->setAlignment(Qt::AlignCenter);
        label = new QLabel(Settings);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 210, 54, 54));
        label->setStyleSheet(QStringLiteral("image: url(:/Images/Home_Button.png);"));
        labelSaat = new QLabel(Settings);
        labelSaat->setObjectName(QStringLiteral("labelSaat"));
        labelSaat->setGeometry(QRect(250, 200, 80, 21));
        labelSaat->setFont(font1);
        labelSaat->setStyleSheet(QStringLiteral("color:black;"));
        labelSaat->setAlignment(Qt::AlignCenter);
        labelTarihtText = new QLabel(Settings);
        labelTarihtText->setObjectName(QStringLiteral("labelTarihtText"));
        labelTarihtText->setGeometry(QRect(160, 240, 80, 17));
        labelTarihtText->setFont(font);
        labelTarihtText->setStyleSheet(QStringLiteral("color:black;"));
        labelTarihtText->setAlignment(Qt::AlignCenter);
        labelSaatText = new QLabel(Settings);
        labelSaatText->setObjectName(QStringLiteral("labelSaatText"));
        labelSaatText->setGeometry(QRect(160, 200, 80, 17));
        labelSaatText->setFont(font);
        labelSaatText->setStyleSheet(QStringLiteral("color:black;"));
        labelSaatText->setAlignment(Qt::AlignCenter);
        leftbt = new QLabel(Settings);
        leftbt->setObjectName(QStringLiteral("leftbt"));
        leftbt->setGeometry(QRect(420, 200, 51, 51));
        leftbt->setStyleSheet(QStringLiteral("image: url(:/Images/bot_button.png);"));
        rightbt = new QLabel(Settings);
        rightbt->setObjectName(QStringLiteral("rightbt"));
        rightbt->setGeometry(QRect(420, 140, 51, 51));
        rightbt->setStyleSheet(QStringLiteral("image: url(:/Images/top_button.png);"));
        horizontalSlider = new QSlider(Settings);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setEnabled(true);
        horizontalSlider->setGeometry(QRect(155, 110, 160, 29));
        QFont font2;
        font2.setFamily(QStringLiteral("Ubuntu Mono"));
        font2.setPointSize(10);
        horizontalSlider->setFont(font2);
        horizontalSlider->setStyleSheet(QString::fromUtf8("/* K\304\261za\304\237\304\261n genel kal\304\261nl\304\261\304\237\304\261 ve arka plan\304\261 */\n"
"QSlider::groove:horizontal {\n"
"    border: none;\n"
"    height: 35px; \n"
"    background: #dcdcdc;\n"
"}\n"
"\n"
"/* Sol taraftaki dolgu k\304\261sm\304\261 (Sar\304\261/Turuncu) */\n"
"QSlider::sub-page:horizontal {\n"
"    background: gray; \n"
"}\n"
"\n"
"/* Sa\304\237 taraftaki bo\305\237 k\304\261s\304\261m (A\303\247\304\261k Gri) */\n"
"QSlider::add-page:horizontal {\n"
"    background: #e0e0e0;\n"
"}\n"
"\n"
"/* Kayd\304\261r\304\261c\304\261 Tutama\303\247*/\n"
"QSlider::handle:horizontal {\n"
"    background: black;\n"
"    width: 25px; /* Tutamac\304\261n geni\305\237li\304\237i */\n"
"}"));
        horizontalSlider->setMaximum(6);
        horizontalSlider->setValue(2);
        horizontalSlider->setTracking(true);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(false);
        horizontalSlider->setTickPosition(QSlider::TicksAbove);
        horizontalSlider->setTickInterval(0);
        increasebt = new QLabel(Settings);
        increasebt->setObjectName(QStringLiteral("increasebt"));
        increasebt->setGeometry(QRect(420, 20, 51, 51));
        increasebt->setStyleSheet(QStringLiteral("image: url(:/Images/right_button.png);"));
        decreasebt = new QLabel(Settings);
        decreasebt->setObjectName(QStringLiteral("decreasebt"));
        decreasebt->setGeometry(QRect(420, 80, 51, 51));
        decreasebt->setStyleSheet(QStringLiteral("image: url(:/Images/left_button.png);"));

        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Form", 0));
        background->setText(QString());
        labelBacklightMinus->setText(QApplication::translate("Settings", "Parlakl\304\261k -", 0));
        checkBox->setText(QApplication::translate("Settings", "Parlakl\304\261k Oto.", 0));
        labelBacklightPlus->setText(QApplication::translate("Settings", "Parlakl\304\261k +", 0));
        labelTarih->setText(QApplication::translate("Settings", "??.??.??", 0));
        label->setText(QString());
        labelSaat->setText(QApplication::translate("Settings", "??:??:??", 0));
        labelTarihtText->setText(QApplication::translate("Settings", "Tarih:", 0));
        labelSaatText->setText(QApplication::translate("Settings", "Saat:", 0));
        leftbt->setText(QString());
        rightbt->setText(QString());
        increasebt->setText(QString());
        decreasebt->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
