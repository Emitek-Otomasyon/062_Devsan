/********************************************************************************
** Form generated from reading UI file 'tek_kirma.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEK_KIRMA_H
#define UI_TEK_KIRMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tek_kirma
{
public:
    QLabel *Background;
    QLabel *tek_kirma_image;
    QLabel *ArrowWinchUp_1;
    QLabel *ArrowWinchUp_0;
    QLabel *ArrowWinchUp_2;
    QLabel *ArrowWinchDown_1;
    QLabel *ArrowWinchDown_0;
    QLabel *ArrowWinchDown_2;
    QLabel *ArrowFirstBoomUp_1;
    QLabel *ArrowFirstBoomUp_0;
    QLabel *ArrowFirstBoomUp_2;
    QLabel *ArrowFirstBoomDown_1;
    QLabel *ArrowFirstBoomDown_0;
    QLabel *ArrowFirstBoomDown_2;
    QLabel *ArrowFirstTelescopeIn_1;
    QLabel *ArrowFirstTelescopeIn_0;
    QLabel *ArrowFirstTelescopeIn_2;
    QLabel *ArrowFirstTelescopeOut_1;
    QLabel *ArrowFirstTelescopeOut_0;
    QLabel *ArrowFirstTelescopeOut_2;
    QLabel *ArrowMainBoomUp_1;
    QLabel *ArrowMainBoomUp_0;
    QLabel *ArrowMainBoomUp_2;
    QLabel *ArrowMainBoomDown_1;
    QLabel *ArrowMainBoomDown_0;
    QLabel *ArrowMainBoomDown_2;
    QLabel *ArrowRotationLeft_1;
    QLabel *ArrowRotationLeft_0;
    QLabel *ArrowRotationLeft_2;
    QLabel *ArrowRotationRight_1;
    QLabel *ArrowRotationRight_0;
    QLabel *ArrowRotationRight_2;
    QProgressBar *P1BarGraph;
    QProgressBar *P2BarGraph;
    QLabel *Acikirma1;
    QLabel *Acikirma1_deger;
    QLabel *P2Bar;
    QLabel *P2BarDeger;
    QLabel *P1BarDeger;
    QLabel *P1Bar;
    QLabel *mesaj;
    QLabel *l_SSID;
    QLabel *label;
    QLabel *Bypass_1;
    QLabel *Bypass_0;
    QLabel *MainboomAciValue;
    QLabel *MainBoomAci;

    void setupUi(QWidget *tek_kirma)
    {
        if (tek_kirma->objectName().isEmpty())
            tek_kirma->setObjectName(QStringLiteral("tek_kirma"));
        tek_kirma->resize(480, 272);
        Background = new QLabel(tek_kirma);
        Background->setObjectName(QStringLiteral("Background"));
        Background->setGeometry(QRect(0, 0, 480, 272));
        Background->setStyleSheet(QLatin1String("background-color: white;\n"
""));
        tek_kirma_image = new QLabel(tek_kirma);
        tek_kirma_image->setObjectName(QStringLiteral("tek_kirma_image"));
        tek_kirma_image->setGeometry(QRect(60, 75, 320, 160));
        tek_kirma_image->setStyleSheet(QStringLiteral("image: url(:/Images/tek_kirma.png);"));
        tek_kirma_image->setAlignment(Qt::AlignCenter);
        ArrowWinchUp_1 = new QLabel(tek_kirma);
        ArrowWinchUp_1->setObjectName(QStringLiteral("ArrowWinchUp_1"));
        ArrowWinchUp_1->setGeometry(QRect(370, 150, 30, 30));
        ArrowWinchUp_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_yukari.png")));
        ArrowWinchUp_0 = new QLabel(tek_kirma);
        ArrowWinchUp_0->setObjectName(QStringLiteral("ArrowWinchUp_0"));
        ArrowWinchUp_0->setGeometry(QRect(370, 150, 30, 30));
        ArrowWinchUp_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_yukari.png")));
        ArrowWinchUp_2 = new QLabel(tek_kirma);
        ArrowWinchUp_2->setObjectName(QStringLiteral("ArrowWinchUp_2"));
        ArrowWinchUp_2->setGeometry(QRect(370, 150, 30, 30));
        ArrowWinchUp_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_yukari.png")));
        ArrowWinchDown_1 = new QLabel(tek_kirma);
        ArrowWinchDown_1->setObjectName(QStringLiteral("ArrowWinchDown_1"));
        ArrowWinchDown_1->setGeometry(QRect(370, 190, 30, 30));
        ArrowWinchDown_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_asagi.png")));
        ArrowWinchDown_0 = new QLabel(tek_kirma);
        ArrowWinchDown_0->setObjectName(QStringLiteral("ArrowWinchDown_0"));
        ArrowWinchDown_0->setGeometry(QRect(370, 190, 30, 30));
        ArrowWinchDown_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_asagi.png")));
        ArrowWinchDown_2 = new QLabel(tek_kirma);
        ArrowWinchDown_2->setObjectName(QStringLiteral("ArrowWinchDown_2"));
        ArrowWinchDown_2->setGeometry(QRect(370, 190, 30, 30));
        ArrowWinchDown_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_asagi.png")));
        ArrowFirstBoomUp_1 = new QLabel(tek_kirma);
        ArrowFirstBoomUp_1->setObjectName(QStringLiteral("ArrowFirstBoomUp_1"));
        ArrowFirstBoomUp_1->setGeometry(QRect(265, 160, 30, 30));
        ArrowFirstBoomUp_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_yukari.png")));
        ArrowFirstBoomUp_0 = new QLabel(tek_kirma);
        ArrowFirstBoomUp_0->setObjectName(QStringLiteral("ArrowFirstBoomUp_0"));
        ArrowFirstBoomUp_0->setGeometry(QRect(265, 160, 30, 30));
        ArrowFirstBoomUp_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_yukari.png")));
        ArrowFirstBoomUp_2 = new QLabel(tek_kirma);
        ArrowFirstBoomUp_2->setObjectName(QStringLiteral("ArrowFirstBoomUp_2"));
        ArrowFirstBoomUp_2->setGeometry(QRect(265, 160, 30, 30));
        ArrowFirstBoomUp_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_yukari.png")));
        ArrowFirstBoomDown_1 = new QLabel(tek_kirma);
        ArrowFirstBoomDown_1->setObjectName(QStringLiteral("ArrowFirstBoomDown_1"));
        ArrowFirstBoomDown_1->setGeometry(QRect(265, 200, 30, 30));
        ArrowFirstBoomDown_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_asagi.png")));
        ArrowFirstBoomDown_0 = new QLabel(tek_kirma);
        ArrowFirstBoomDown_0->setObjectName(QStringLiteral("ArrowFirstBoomDown_0"));
        ArrowFirstBoomDown_0->setGeometry(QRect(265, 200, 30, 30));
        ArrowFirstBoomDown_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_asagi.png")));
        ArrowFirstBoomDown_2 = new QLabel(tek_kirma);
        ArrowFirstBoomDown_2->setObjectName(QStringLiteral("ArrowFirstBoomDown_2"));
        ArrowFirstBoomDown_2->setGeometry(QRect(265, 200, 30, 30));
        ArrowFirstBoomDown_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_asagi.png")));
        ArrowFirstTelescopeIn_1 = new QLabel(tek_kirma);
        ArrowFirstTelescopeIn_1->setObjectName(QStringLiteral("ArrowFirstTelescopeIn_1"));
        ArrowFirstTelescopeIn_1->setGeometry(QRect(230, 180, 30, 30));
        ArrowFirstTelescopeIn_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_sol.png")));
        ArrowFirstTelescopeIn_0 = new QLabel(tek_kirma);
        ArrowFirstTelescopeIn_0->setObjectName(QStringLiteral("ArrowFirstTelescopeIn_0"));
        ArrowFirstTelescopeIn_0->setGeometry(QRect(230, 180, 30, 30));
        ArrowFirstTelescopeIn_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_sol.png")));
        ArrowFirstTelescopeIn_2 = new QLabel(tek_kirma);
        ArrowFirstTelescopeIn_2->setObjectName(QStringLiteral("ArrowFirstTelescopeIn_2"));
        ArrowFirstTelescopeIn_2->setGeometry(QRect(230, 180, 30, 30));
        ArrowFirstTelescopeIn_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_sol.png")));
        ArrowFirstTelescopeOut_1 = new QLabel(tek_kirma);
        ArrowFirstTelescopeOut_1->setObjectName(QStringLiteral("ArrowFirstTelescopeOut_1"));
        ArrowFirstTelescopeOut_1->setGeometry(QRect(300, 180, 30, 30));
        ArrowFirstTelescopeOut_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_sag.png")));
        ArrowFirstTelescopeOut_0 = new QLabel(tek_kirma);
        ArrowFirstTelescopeOut_0->setObjectName(QStringLiteral("ArrowFirstTelescopeOut_0"));
        ArrowFirstTelescopeOut_0->setGeometry(QRect(300, 180, 30, 30));
        ArrowFirstTelescopeOut_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_sag.png")));
        ArrowFirstTelescopeOut_2 = new QLabel(tek_kirma);
        ArrowFirstTelescopeOut_2->setObjectName(QStringLiteral("ArrowFirstTelescopeOut_2"));
        ArrowFirstTelescopeOut_2->setGeometry(QRect(300, 180, 30, 30));
        ArrowFirstTelescopeOut_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_sag.png")));
        ArrowMainBoomUp_1 = new QLabel(tek_kirma);
        ArrowMainBoomUp_1->setObjectName(QStringLiteral("ArrowMainBoomUp_1"));
        ArrowMainBoomUp_1->setGeometry(QRect(30, 130, 30, 30));
        ArrowMainBoomUp_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_yukari.png")));
        ArrowMainBoomUp_0 = new QLabel(tek_kirma);
        ArrowMainBoomUp_0->setObjectName(QStringLiteral("ArrowMainBoomUp_0"));
        ArrowMainBoomUp_0->setGeometry(QRect(30, 130, 30, 30));
        ArrowMainBoomUp_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_yukari.png")));
        ArrowMainBoomUp_2 = new QLabel(tek_kirma);
        ArrowMainBoomUp_2->setObjectName(QStringLiteral("ArrowMainBoomUp_2"));
        ArrowMainBoomUp_2->setGeometry(QRect(30, 130, 30, 30));
        ArrowMainBoomUp_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_yukari.png")));
        ArrowMainBoomDown_1 = new QLabel(tek_kirma);
        ArrowMainBoomDown_1->setObjectName(QStringLiteral("ArrowMainBoomDown_1"));
        ArrowMainBoomDown_1->setGeometry(QRect(30, 170, 30, 30));
        ArrowMainBoomDown_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_asagi.png")));
        ArrowMainBoomDown_0 = new QLabel(tek_kirma);
        ArrowMainBoomDown_0->setObjectName(QStringLiteral("ArrowMainBoomDown_0"));
        ArrowMainBoomDown_0->setGeometry(QRect(30, 170, 30, 30));
        ArrowMainBoomDown_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_asagi.png")));
        ArrowMainBoomDown_2 = new QLabel(tek_kirma);
        ArrowMainBoomDown_2->setObjectName(QStringLiteral("ArrowMainBoomDown_2"));
        ArrowMainBoomDown_2->setGeometry(QRect(30, 170, 30, 30));
        ArrowMainBoomDown_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_asagi.png")));
        ArrowRotationLeft_1 = new QLabel(tek_kirma);
        ArrowRotationLeft_1->setObjectName(QStringLiteral("ArrowRotationLeft_1"));
        ArrowRotationLeft_1->setGeometry(QRect(30, 198, 60, 60));
        ArrowRotationLeft_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/yay_gri_sol.png")));
        ArrowRotationLeft_0 = new QLabel(tek_kirma);
        ArrowRotationLeft_0->setObjectName(QStringLiteral("ArrowRotationLeft_0"));
        ArrowRotationLeft_0->setGeometry(QRect(30, 198, 60, 60));
        ArrowRotationLeft_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yay_yesil_sol.png")));
        ArrowRotationLeft_2 = new QLabel(tek_kirma);
        ArrowRotationLeft_2->setObjectName(QStringLiteral("ArrowRotationLeft_2"));
        ArrowRotationLeft_2->setGeometry(QRect(30, 198, 60, 60));
        ArrowRotationLeft_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/yay_kirmizi_sol.png")));
        ArrowRotationRight_1 = new QLabel(tek_kirma);
        ArrowRotationRight_1->setObjectName(QStringLiteral("ArrowRotationRight_1"));
        ArrowRotationRight_1->setGeometry(QRect(160, 197, 60, 60));
        ArrowRotationRight_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/yay_gri_sag.png")));
        ArrowRotationRight_0 = new QLabel(tek_kirma);
        ArrowRotationRight_0->setObjectName(QStringLiteral("ArrowRotationRight_0"));
        ArrowRotationRight_0->setGeometry(QRect(160, 197, 60, 60));
        ArrowRotationRight_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yay_yesil_sag.png")));
        ArrowRotationRight_2 = new QLabel(tek_kirma);
        ArrowRotationRight_2->setObjectName(QStringLiteral("ArrowRotationRight_2"));
        ArrowRotationRight_2->setGeometry(QRect(160, 197, 60, 60));
        ArrowRotationRight_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/yay_kirmizi_sag.png")));
        P1BarGraph = new QProgressBar(tek_kirma);
        P1BarGraph->setObjectName(QStringLiteral("P1BarGraph"));
        P1BarGraph->setGeometry(QRect(90, 10, 150, 30));
        P1BarGraph->setStyleSheet(QLatin1String("QProgressBar{\n"
"border: 1px solid black;\n"
"border-radius: 5px;\n"
"padding: 1px;\n"
"}\n"
"\n"
"QProgressBar::chunk{\n"
"background-color:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0.334928 rgba(152,255,151,255), stop:0.47619 rgba(0,255,0,255), stop: 0.82381 rgba(0,197,0,255));\n"
"border-radius: 5px;\n"
"}\n"
""));
        P1BarGraph->setValue(0);
        P1BarGraph->setAlignment(Qt::AlignCenter);
        P2BarGraph = new QProgressBar(tek_kirma);
        P2BarGraph->setObjectName(QStringLiteral("P2BarGraph"));
        P2BarGraph->setGeometry(QRect(275, 10, 150, 30));
        P2BarGraph->setStyleSheet(QLatin1String("QProgressBar{\n"
"border: 1px solid black;\n"
"border-radius: 5px;\n"
"padding: 1px;\n"
"}\n"
"\n"
"QProgressBar::chunk{\n"
"background-color:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0.334928 rgba(152,255,151,255), stop:0.47619 rgba(0,255,0,255), stop: 0.82381 rgba(0,197,0,255));\n"
"border-radius: 5px;\n"
"}\n"
""));
        P2BarGraph->setMaximum(100);
        P2BarGraph->setValue(0);
        P2BarGraph->setAlignment(Qt::AlignCenter);
        Acikirma1 = new QLabel(tek_kirma);
        Acikirma1->setObjectName(QStringLiteral("Acikirma1"));
        Acikirma1->setGeometry(QRect(275, 42, 111, 21));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Mono"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        Acikirma1->setFont(font);
        Acikirma1_deger = new QLabel(tek_kirma);
        Acikirma1_deger->setObjectName(QStringLiteral("Acikirma1_deger"));
        Acikirma1_deger->setGeometry(QRect(387, 44, 61, 21));
        Acikirma1_deger->setFont(font);
        P2Bar = new QLabel(tek_kirma);
        P2Bar->setObjectName(QStringLiteral("P2Bar"));
        P2Bar->setGeometry(QRect(160, 250, 41, 21));
        P2Bar->setFont(font);
        P2BarDeger = new QLabel(tek_kirma);
        P2BarDeger->setObjectName(QStringLiteral("P2BarDeger"));
        P2BarDeger->setGeometry(QRect(190, 250, 101, 21));
        P2BarDeger->setFont(font);
        P1BarDeger = new QLabel(tek_kirma);
        P1BarDeger->setObjectName(QStringLiteral("P1BarDeger"));
        P1BarDeger->setGeometry(QRect(60, 250, 81, 21));
        P1BarDeger->setFont(font);
        P1Bar = new QLabel(tek_kirma);
        P1Bar->setObjectName(QStringLiteral("P1Bar"));
        P1Bar->setGeometry(QRect(30, 250, 41, 21));
        P1Bar->setFont(font);
        mesaj = new QLabel(tek_kirma);
        mesaj->setObjectName(QStringLiteral("mesaj"));
        mesaj->setGeometry(QRect(0, 252, 415, 20));
        mesaj->setFont(font);
        mesaj->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 170);"));
        mesaj->setAlignment(Qt::AlignCenter);
        l_SSID = new QLabel(tek_kirma);
        l_SSID->setObjectName(QStringLiteral("l_SSID"));
        l_SSID->setGeometry(QRect(240, 67, 161, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Sans Mono"));
        font1.setBold(true);
        font1.setWeight(75);
        l_SSID->setFont(font1);
        l_SSID->setAlignment(Qt::AlignCenter);
        label = new QLabel(tek_kirma);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 60, 90, 40));
        label->setStyleSheet(QStringLiteral("background-image: url(:/Images/DEVSAN_logo_90x40.png);"));
        Bypass_1 = new QLabel(tek_kirma);
        Bypass_1->setObjectName(QStringLiteral("Bypass_1"));
        Bypass_1->setGeometry(QRect(412, 204, 68, 68));
        Bypass_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/Bypass_Yesil.png")));
        Bypass_0 = new QLabel(tek_kirma);
        Bypass_0->setObjectName(QStringLiteral("Bypass_0"));
        Bypass_0->setGeometry(QRect(412, 204, 68, 68));
        Bypass_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/Bypass_Kirmizi.png")));
        MainboomAciValue = new QLabel(tek_kirma);
        MainboomAciValue->setObjectName(QStringLiteral("MainboomAciValue"));
        MainboomAciValue->setGeometry(QRect(205, 44, 61, 21));
        MainboomAciValue->setFont(font);
        MainboomAciValue->setStyleSheet(QStringLiteral(""));
        MainBoomAci = new QLabel(tek_kirma);
        MainBoomAci->setObjectName(QStringLiteral("MainBoomAci"));
        MainBoomAci->setGeometry(QRect(90, 42, 111, 21));
        MainBoomAci->setFont(font);

        retranslateUi(tek_kirma);

        QMetaObject::connectSlotsByName(tek_kirma);
    } // setupUi

    void retranslateUi(QWidget *tek_kirma)
    {
        tek_kirma->setWindowTitle(QApplication::translate("tek_kirma", "Form", 0));
        Background->setText(QString());
        tek_kirma_image->setText(QString());
        ArrowWinchUp_1->setText(QString());
        ArrowWinchUp_0->setText(QString());
        ArrowWinchUp_2->setText(QString());
        ArrowWinchDown_1->setText(QString());
        ArrowWinchDown_0->setText(QString());
        ArrowWinchDown_2->setText(QString());
        ArrowFirstBoomUp_1->setText(QString());
        ArrowFirstBoomUp_0->setText(QString());
        ArrowFirstBoomUp_2->setText(QString());
        ArrowFirstBoomDown_1->setText(QString());
        ArrowFirstBoomDown_0->setText(QString());
        ArrowFirstBoomDown_2->setText(QString());
        ArrowFirstTelescopeIn_1->setText(QString());
        ArrowFirstTelescopeIn_0->setText(QString());
        ArrowFirstTelescopeIn_2->setText(QString());
        ArrowFirstTelescopeOut_1->setText(QString());
        ArrowFirstTelescopeOut_0->setText(QString());
        ArrowFirstTelescopeOut_2->setText(QString());
        ArrowMainBoomUp_1->setText(QString());
        ArrowMainBoomUp_0->setText(QString());
        ArrowMainBoomUp_2->setText(QString());
        ArrowMainBoomDown_1->setText(QString());
        ArrowMainBoomDown_0->setText(QString());
        ArrowMainBoomDown_2->setText(QString());
        ArrowRotationLeft_1->setText(QString());
        ArrowRotationLeft_0->setText(QString());
        ArrowRotationLeft_2->setText(QString());
        ArrowRotationRight_1->setText(QString());
        ArrowRotationRight_0->setText(QString());
        ArrowRotationRight_2->setText(QString());
        Acikirma1->setText(QApplication::translate("tek_kirma", "<html><head/><body><p><span style=\" color:#000000;\">1.K\304\261rma A\303\247\304\261:</span></p></body></html>", 0));
        Acikirma1_deger->setText(QApplication::translate("tek_kirma", "<html><head/><body><p><span style=\" color:#000000;\">0.0\302\260</span></p></body></html>", 0));
        P2Bar->setText(QApplication::translate("tek_kirma", "<html><head/><body><p><span style=\" color:#000000;\">P2:</span></p></body></html>", 0));
        P2BarDeger->setText(QApplication::translate("tek_kirma", "<html><head/><body><p><span style=\" color:#000000;\">0 Bar</span></p></body></html>", 0));
        P1BarDeger->setText(QApplication::translate("tek_kirma", "<html><head/><body><p><span style=\" color:#000000;\">0 Bar</span></p></body></html>", 0));
        P1Bar->setText(QApplication::translate("tek_kirma", "<html><head/><body><p><span style=\" color:#000000;\">P1:</span></p></body></html>", 0));
        mesaj->setText(QApplication::translate("tek_kirma", "<html><head/><body><p><span style=\" color:#c80000;\">TextLabel</span></p></body></html>", 0));
        l_SSID->setText(QString());
        label->setText(QString());
        Bypass_1->setText(QString());
        Bypass_0->setText(QString());
        MainboomAciValue->setText(QApplication::translate("tek_kirma", "<html><head/><body><p><span style=\" color:#000000;\">0.0\302\260</span></p></body></html>", 0));
        MainBoomAci->setText(QApplication::translate("tek_kirma", "<html><head/><body><p><span style=\" color:#000000;\">Ana Bom A\303\247\304\261:</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class tek_kirma: public Ui_tek_kirma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEK_KIRMA_H
