/********************************************************************************
** Form generated from reading UI file 'cift_kirma.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIFT_KIRMA_H
#define UI_CIFT_KIRMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cift_kirma
{
public:
    QLabel *background;
    QLabel *Cift_Kirma_image;
    QLabel *ArrowWinchUp_1;
    QLabel *ArrowWinchUp_0;
    QLabel *ArrowWinchUp_2;
    QLabel *ArrowWinchDown_1;
    QLabel *ArrowWinchDown_0;
    QLabel *ArrowWinchDown_2;
    QLabel *ArrowMainBoomUp_1;
    QLabel *ArrowMainBoomUp_0;
    QLabel *ArrowMainBoomUp_2;
    QLabel *ArrowMainBoomDown_1;
    QLabel *ArrowMainBoomDown_0;
    QLabel *ArrowMainBoomDown_2;
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
    QLabel *ArrowJibBoomUp_1;
    QLabel *ArrowJibBoomUp_0;
    QLabel *ArrowJibBoomUp_2;
    QLabel *ArrowJibBoomDown_1;
    QLabel *ArrowJibBoomDown_0;
    QLabel *ArrowJibBoomDown_2;
    QLabel *ArrowJibTelescopeIn_1;
    QLabel *ArrowJibTelescopeIn_0;
    QLabel *ArrowJibTelescopeIn_2;
    QLabel *ArrowJibTelescopeOut_1;
    QLabel *ArrowJibTelescopeOut_0;
    QLabel *ArrowJibTelescopeOut_2;
    QLabel *ArrowRotationLeft_1;
    QLabel *ArrowRotationLeft_0;
    QLabel *ArrowRotationLeft_2;
    QLabel *ArrowRotationRight_1;
    QLabel *ArrowRotationRight_0;
    QLabel *ArrowRotationRight_2;
    QProgressBar *P1BarGraph;
    QProgressBar *P2BarGraph;
    QProgressBar *P3BarGraph;
    QLabel *Acikirma1;
    QLabel *Acikirma1_deger;
    QLabel *Acikirma2;
    QLabel *Acikirma2_deger;
    QLabel *P1Bar;
    QLabel *P2Bar;
    QLabel *P3Bar;
    QLabel *P1BarDeger;
    QLabel *P2BarDeger;
    QLabel *P3BarDeger;
    QLabel *mesaj;
    QLabel *label;
    QLabel *Bypass_1;
    QLabel *Bypass_0;
    QLabel *MainBoomAci;
    QLabel *MainboomAciValue;

    void setupUi(QWidget *cift_kirma)
    {
        if (cift_kirma->objectName().isEmpty())
            cift_kirma->setObjectName(QStringLiteral("cift_kirma"));
        cift_kirma->resize(480, 272);
        background = new QLabel(cift_kirma);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 0, 480, 272));
        background->setStyleSheet(QStringLiteral("background-color: white;"));
        Cift_Kirma_image = new QLabel(cift_kirma);
        Cift_Kirma_image->setObjectName(QStringLiteral("Cift_Kirma_image"));
        Cift_Kirma_image->setGeometry(QRect(32, 65, 390, 170));
        Cift_Kirma_image->setStyleSheet(QStringLiteral("image: url(:/Images/cift_kirma.png);"));
        ArrowWinchUp_1 = new QLabel(cift_kirma);
        ArrowWinchUp_1->setObjectName(QStringLiteral("ArrowWinchUp_1"));
        ArrowWinchUp_1->setGeometry(QRect(380, 175, 30, 30));
        ArrowWinchUp_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_yukari.png")));
        ArrowWinchUp_0 = new QLabel(cift_kirma);
        ArrowWinchUp_0->setObjectName(QStringLiteral("ArrowWinchUp_0"));
        ArrowWinchUp_0->setGeometry(QRect(380, 175, 30, 30));
        ArrowWinchUp_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_yukari.png")));
        ArrowWinchUp_2 = new QLabel(cift_kirma);
        ArrowWinchUp_2->setObjectName(QStringLiteral("ArrowWinchUp_2"));
        ArrowWinchUp_2->setGeometry(QRect(380, 175, 30, 30));
        ArrowWinchUp_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_yukari.png")));
        ArrowWinchDown_1 = new QLabel(cift_kirma);
        ArrowWinchDown_1->setObjectName(QStringLiteral("ArrowWinchDown_1"));
        ArrowWinchDown_1->setGeometry(QRect(380, 215, 30, 30));
        ArrowWinchDown_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_asagi.png")));
        ArrowWinchDown_0 = new QLabel(cift_kirma);
        ArrowWinchDown_0->setObjectName(QStringLiteral("ArrowWinchDown_0"));
        ArrowWinchDown_0->setGeometry(QRect(380, 215, 30, 30));
        ArrowWinchDown_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_asagi.png")));
        ArrowWinchDown_2 = new QLabel(cift_kirma);
        ArrowWinchDown_2->setObjectName(QStringLiteral("ArrowWinchDown_2"));
        ArrowWinchDown_2->setGeometry(QRect(380, 215, 30, 30));
        ArrowWinchDown_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_asagi.png")));
        ArrowMainBoomUp_1 = new QLabel(cift_kirma);
        ArrowMainBoomUp_1->setObjectName(QStringLiteral("ArrowMainBoomUp_1"));
        ArrowMainBoomUp_1->setGeometry(QRect(10, 110, 30, 30));
        ArrowMainBoomUp_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_yukari.png")));
        ArrowMainBoomUp_0 = new QLabel(cift_kirma);
        ArrowMainBoomUp_0->setObjectName(QStringLiteral("ArrowMainBoomUp_0"));
        ArrowMainBoomUp_0->setGeometry(QRect(10, 110, 30, 30));
        ArrowMainBoomUp_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_yukari.png")));
        ArrowMainBoomUp_2 = new QLabel(cift_kirma);
        ArrowMainBoomUp_2->setObjectName(QStringLiteral("ArrowMainBoomUp_2"));
        ArrowMainBoomUp_2->setGeometry(QRect(10, 110, 30, 30));
        ArrowMainBoomUp_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_yukari.png")));
        ArrowMainBoomDown_1 = new QLabel(cift_kirma);
        ArrowMainBoomDown_1->setObjectName(QStringLiteral("ArrowMainBoomDown_1"));
        ArrowMainBoomDown_1->setGeometry(QRect(10, 150, 30, 30));
        ArrowMainBoomDown_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_asagi.png")));
        ArrowMainBoomDown_0 = new QLabel(cift_kirma);
        ArrowMainBoomDown_0->setObjectName(QStringLiteral("ArrowMainBoomDown_0"));
        ArrowMainBoomDown_0->setGeometry(QRect(10, 150, 30, 30));
        ArrowMainBoomDown_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_asagi.png")));
        ArrowMainBoomDown_2 = new QLabel(cift_kirma);
        ArrowMainBoomDown_2->setObjectName(QStringLiteral("ArrowMainBoomDown_2"));
        ArrowMainBoomDown_2->setGeometry(QRect(10, 150, 30, 30));
        ArrowMainBoomDown_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_asagi.png")));
        ArrowFirstBoomUp_1 = new QLabel(cift_kirma);
        ArrowFirstBoomUp_1->setObjectName(QStringLiteral("ArrowFirstBoomUp_1"));
        ArrowFirstBoomUp_1->setGeometry(QRect(160, 165, 30, 30));
        ArrowFirstBoomUp_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_yukari.png")));
        ArrowFirstBoomUp_0 = new QLabel(cift_kirma);
        ArrowFirstBoomUp_0->setObjectName(QStringLiteral("ArrowFirstBoomUp_0"));
        ArrowFirstBoomUp_0->setGeometry(QRect(160, 165, 30, 30));
        ArrowFirstBoomUp_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_yukari.png")));
        ArrowFirstBoomUp_2 = new QLabel(cift_kirma);
        ArrowFirstBoomUp_2->setObjectName(QStringLiteral("ArrowFirstBoomUp_2"));
        ArrowFirstBoomUp_2->setGeometry(QRect(160, 165, 30, 30));
        ArrowFirstBoomUp_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_yukari.png")));
        ArrowFirstBoomDown_1 = new QLabel(cift_kirma);
        ArrowFirstBoomDown_1->setObjectName(QStringLiteral("ArrowFirstBoomDown_1"));
        ArrowFirstBoomDown_1->setGeometry(QRect(160, 205, 30, 30));
        ArrowFirstBoomDown_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_asagi.png")));
        ArrowFirstBoomDown_0 = new QLabel(cift_kirma);
        ArrowFirstBoomDown_0->setObjectName(QStringLiteral("ArrowFirstBoomDown_0"));
        ArrowFirstBoomDown_0->setGeometry(QRect(160, 205, 30, 30));
        ArrowFirstBoomDown_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_asagi.png")));
        ArrowFirstBoomDown_2 = new QLabel(cift_kirma);
        ArrowFirstBoomDown_2->setObjectName(QStringLiteral("ArrowFirstBoomDown_2"));
        ArrowFirstBoomDown_2->setGeometry(QRect(160, 205, 30, 30));
        ArrowFirstBoomDown_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_asagi.png")));
        ArrowFirstTelescopeIn_1 = new QLabel(cift_kirma);
        ArrowFirstTelescopeIn_1->setObjectName(QStringLiteral("ArrowFirstTelescopeIn_1"));
        ArrowFirstTelescopeIn_1->setGeometry(QRect(130, 185, 30, 30));
        ArrowFirstTelescopeIn_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_sol.png")));
        ArrowFirstTelescopeIn_0 = new QLabel(cift_kirma);
        ArrowFirstTelescopeIn_0->setObjectName(QStringLiteral("ArrowFirstTelescopeIn_0"));
        ArrowFirstTelescopeIn_0->setGeometry(QRect(130, 185, 30, 30));
        ArrowFirstTelescopeIn_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_sol.png")));
        ArrowFirstTelescopeIn_2 = new QLabel(cift_kirma);
        ArrowFirstTelescopeIn_2->setObjectName(QStringLiteral("ArrowFirstTelescopeIn_2"));
        ArrowFirstTelescopeIn_2->setGeometry(QRect(130, 185, 30, 30));
        ArrowFirstTelescopeIn_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_sol.png")));
        ArrowFirstTelescopeOut_1 = new QLabel(cift_kirma);
        ArrowFirstTelescopeOut_1->setObjectName(QStringLiteral("ArrowFirstTelescopeOut_1"));
        ArrowFirstTelescopeOut_1->setGeometry(QRect(190, 185, 30, 30));
        ArrowFirstTelescopeOut_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_sag.png")));
        ArrowFirstTelescopeOut_0 = new QLabel(cift_kirma);
        ArrowFirstTelescopeOut_0->setObjectName(QStringLiteral("ArrowFirstTelescopeOut_0"));
        ArrowFirstTelescopeOut_0->setGeometry(QRect(190, 185, 30, 30));
        ArrowFirstTelescopeOut_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_sag.png")));
        ArrowFirstTelescopeOut_2 = new QLabel(cift_kirma);
        ArrowFirstTelescopeOut_2->setObjectName(QStringLiteral("ArrowFirstTelescopeOut_2"));
        ArrowFirstTelescopeOut_2->setGeometry(QRect(190, 185, 30, 30));
        ArrowFirstTelescopeOut_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_sag.png")));
        ArrowJibBoomUp_1 = new QLabel(cift_kirma);
        ArrowJibBoomUp_1->setObjectName(QStringLiteral("ArrowJibBoomUp_1"));
        ArrowJibBoomUp_1->setGeometry(QRect(310, 165, 30, 30));
        ArrowJibBoomUp_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_yukari.png")));
        ArrowJibBoomUp_0 = new QLabel(cift_kirma);
        ArrowJibBoomUp_0->setObjectName(QStringLiteral("ArrowJibBoomUp_0"));
        ArrowJibBoomUp_0->setGeometry(QRect(310, 165, 30, 30));
        ArrowJibBoomUp_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_yukari.png")));
        ArrowJibBoomUp_2 = new QLabel(cift_kirma);
        ArrowJibBoomUp_2->setObjectName(QStringLiteral("ArrowJibBoomUp_2"));
        ArrowJibBoomUp_2->setGeometry(QRect(310, 165, 30, 30));
        ArrowJibBoomUp_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_yukari.png")));
        ArrowJibBoomDown_1 = new QLabel(cift_kirma);
        ArrowJibBoomDown_1->setObjectName(QStringLiteral("ArrowJibBoomDown_1"));
        ArrowJibBoomDown_1->setGeometry(QRect(310, 205, 30, 30));
        ArrowJibBoomDown_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_asagi.png")));
        ArrowJibBoomDown_0 = new QLabel(cift_kirma);
        ArrowJibBoomDown_0->setObjectName(QStringLiteral("ArrowJibBoomDown_0"));
        ArrowJibBoomDown_0->setGeometry(QRect(310, 205, 30, 30));
        ArrowJibBoomDown_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_asagi.png")));
        ArrowJibBoomDown_2 = new QLabel(cift_kirma);
        ArrowJibBoomDown_2->setObjectName(QStringLiteral("ArrowJibBoomDown_2"));
        ArrowJibBoomDown_2->setGeometry(QRect(310, 205, 30, 30));
        ArrowJibBoomDown_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_asagi.png")));
        ArrowJibTelescopeIn_1 = new QLabel(cift_kirma);
        ArrowJibTelescopeIn_1->setObjectName(QStringLiteral("ArrowJibTelescopeIn_1"));
        ArrowJibTelescopeIn_1->setGeometry(QRect(280, 185, 30, 30));
        ArrowJibTelescopeIn_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_sol.png")));
        ArrowJibTelescopeIn_0 = new QLabel(cift_kirma);
        ArrowJibTelescopeIn_0->setObjectName(QStringLiteral("ArrowJibTelescopeIn_0"));
        ArrowJibTelescopeIn_0->setGeometry(QRect(280, 185, 30, 30));
        ArrowJibTelescopeIn_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_sol.png")));
        ArrowJibTelescopeIn_2 = new QLabel(cift_kirma);
        ArrowJibTelescopeIn_2->setObjectName(QStringLiteral("ArrowJibTelescopeIn_2"));
        ArrowJibTelescopeIn_2->setGeometry(QRect(280, 185, 30, 30));
        ArrowJibTelescopeIn_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_sol.png")));
        ArrowJibTelescopeOut_1 = new QLabel(cift_kirma);
        ArrowJibTelescopeOut_1->setObjectName(QStringLiteral("ArrowJibTelescopeOut_1"));
        ArrowJibTelescopeOut_1->setGeometry(QRect(340, 185, 30, 30));
        ArrowJibTelescopeOut_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/gri_sag.png")));
        ArrowJibTelescopeOut_0 = new QLabel(cift_kirma);
        ArrowJibTelescopeOut_0->setObjectName(QStringLiteral("ArrowJibTelescopeOut_0"));
        ArrowJibTelescopeOut_0->setGeometry(QRect(340, 185, 30, 30));
        ArrowJibTelescopeOut_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yesil_sag.png")));
        ArrowJibTelescopeOut_2 = new QLabel(cift_kirma);
        ArrowJibTelescopeOut_2->setObjectName(QStringLiteral("ArrowJibTelescopeOut_2"));
        ArrowJibTelescopeOut_2->setGeometry(QRect(340, 185, 30, 30));
        ArrowJibTelescopeOut_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/kirmizi_sag.png")));
        ArrowRotationLeft_1 = new QLabel(cift_kirma);
        ArrowRotationLeft_1->setObjectName(QStringLiteral("ArrowRotationLeft_1"));
        ArrowRotationLeft_1->setGeometry(QRect(20, 210, 50, 50));
        ArrowRotationLeft_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/yay_gri_sol.png")));
        ArrowRotationLeft_0 = new QLabel(cift_kirma);
        ArrowRotationLeft_0->setObjectName(QStringLiteral("ArrowRotationLeft_0"));
        ArrowRotationLeft_0->setGeometry(QRect(20, 210, 50, 50));
        ArrowRotationLeft_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yay_yesil_sol.png")));
        ArrowRotationLeft_2 = new QLabel(cift_kirma);
        ArrowRotationLeft_2->setObjectName(QStringLiteral("ArrowRotationLeft_2"));
        ArrowRotationLeft_2->setGeometry(QRect(20, 210, 50, 50));
        ArrowRotationLeft_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/yay_kirmizi_sol.png")));
        ArrowRotationRight_1 = new QLabel(cift_kirma);
        ArrowRotationRight_1->setObjectName(QStringLiteral("ArrowRotationRight_1"));
        ArrowRotationRight_1->setGeometry(QRect(80, 208, 50, 50));
        ArrowRotationRight_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/yay_gri_sag.png")));
        ArrowRotationRight_0 = new QLabel(cift_kirma);
        ArrowRotationRight_0->setObjectName(QStringLiteral("ArrowRotationRight_0"));
        ArrowRotationRight_0->setGeometry(QRect(80, 208, 50, 50));
        ArrowRotationRight_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/yay_yesil_sag.png")));
        ArrowRotationRight_2 = new QLabel(cift_kirma);
        ArrowRotationRight_2->setObjectName(QStringLiteral("ArrowRotationRight_2"));
        ArrowRotationRight_2->setGeometry(QRect(80, 208, 50, 50));
        ArrowRotationRight_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/yay_kirmizi_sag.png")));
        P1BarGraph = new QProgressBar(cift_kirma);
        P1BarGraph->setObjectName(QStringLiteral("P1BarGraph"));
        P1BarGraph->setGeometry(QRect(30, 10, 120, 30));
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
        P2BarGraph = new QProgressBar(cift_kirma);
        P2BarGraph->setObjectName(QStringLiteral("P2BarGraph"));
        P2BarGraph->setGeometry(QRect(180, 10, 120, 30));
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
        P2BarGraph->setValue(0);
        P2BarGraph->setAlignment(Qt::AlignCenter);
        P3BarGraph = new QProgressBar(cift_kirma);
        P3BarGraph->setObjectName(QStringLiteral("P3BarGraph"));
        P3BarGraph->setGeometry(QRect(330, 10, 120, 30));
        P3BarGraph->setStyleSheet(QLatin1String("QProgressBar{\n"
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
        P3BarGraph->setValue(0);
        P3BarGraph->setAlignment(Qt::AlignCenter);
        Acikirma1 = new QLabel(cift_kirma);
        Acikirma1->setObjectName(QStringLiteral("Acikirma1"));
        Acikirma1->setGeometry(QRect(170, 40, 111, 21));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Mono"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        Acikirma1->setFont(font);
        Acikirma1_deger = new QLabel(cift_kirma);
        Acikirma1_deger->setObjectName(QStringLiteral("Acikirma1_deger"));
        Acikirma1_deger->setGeometry(QRect(275, 42, 51, 21));
        Acikirma1_deger->setFont(font);
        Acikirma2 = new QLabel(cift_kirma);
        Acikirma2->setObjectName(QStringLiteral("Acikirma2"));
        Acikirma2->setGeometry(QRect(325, 40, 111, 21));
        Acikirma2->setFont(font);
        Acikirma2_deger = new QLabel(cift_kirma);
        Acikirma2_deger->setObjectName(QStringLiteral("Acikirma2_deger"));
        Acikirma2_deger->setGeometry(QRect(430, 42, 51, 21));
        Acikirma2_deger->setFont(font);
        P1Bar = new QLabel(cift_kirma);
        P1Bar->setObjectName(QStringLiteral("P1Bar"));
        P1Bar->setGeometry(QRect(30, 250, 41, 21));
        P1Bar->setFont(font);
        P2Bar = new QLabel(cift_kirma);
        P2Bar->setObjectName(QStringLiteral("P2Bar"));
        P2Bar->setGeometry(QRect(160, 250, 41, 21));
        P2Bar->setFont(font);
        P3Bar = new QLabel(cift_kirma);
        P3Bar->setObjectName(QStringLiteral("P3Bar"));
        P3Bar->setGeometry(QRect(300, 250, 41, 21));
        P3Bar->setFont(font);
        P1BarDeger = new QLabel(cift_kirma);
        P1BarDeger->setObjectName(QStringLiteral("P1BarDeger"));
        P1BarDeger->setGeometry(QRect(60, 250, 81, 21));
        P1BarDeger->setFont(font);
        P2BarDeger = new QLabel(cift_kirma);
        P2BarDeger->setObjectName(QStringLiteral("P2BarDeger"));
        P2BarDeger->setGeometry(QRect(190, 250, 91, 21));
        P2BarDeger->setFont(font);
        P3BarDeger = new QLabel(cift_kirma);
        P3BarDeger->setObjectName(QStringLiteral("P3BarDeger"));
        P3BarDeger->setGeometry(QRect(330, 250, 81, 21));
        P3BarDeger->setFont(font);
        mesaj = new QLabel(cift_kirma);
        mesaj->setObjectName(QStringLiteral("mesaj"));
        mesaj->setGeometry(QRect(0, 252, 415, 20));
        mesaj->setFont(font);
        mesaj->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 170);"));
        mesaj->setAlignment(Qt::AlignCenter);
        label = new QLabel(cift_kirma);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 60, 81, 41));
        label->setStyleSheet(QStringLiteral("image: url(:/Images/DEVSAN_logo_90x40.png);"));
        Bypass_1 = new QLabel(cift_kirma);
        Bypass_1->setObjectName(QStringLiteral("Bypass_1"));
        Bypass_1->setGeometry(QRect(412, 204, 68, 68));
        Bypass_1->setPixmap(QPixmap(QString::fromUtf8(":/Images/Bypass_Yesil.png")));
        Bypass_0 = new QLabel(cift_kirma);
        Bypass_0->setObjectName(QStringLiteral("Bypass_0"));
        Bypass_0->setGeometry(QRect(412, 204, 68, 68));
        Bypass_0->setPixmap(QPixmap(QString::fromUtf8(":/Images/Bypass_Kirmizi.png")));
        MainBoomAci = new QLabel(cift_kirma);
        MainBoomAci->setObjectName(QStringLiteral("MainBoomAci"));
        MainBoomAci->setGeometry(QRect(10, 40, 111, 21));
        MainBoomAci->setFont(font);
        MainboomAciValue = new QLabel(cift_kirma);
        MainboomAciValue->setObjectName(QStringLiteral("MainboomAciValue"));
        MainboomAciValue->setGeometry(QRect(122, 42, 61, 21));
        MainboomAciValue->setFont(font);
        MainboomAciValue->setStyleSheet(QStringLiteral(""));

        retranslateUi(cift_kirma);

        QMetaObject::connectSlotsByName(cift_kirma);
    } // setupUi

    void retranslateUi(QWidget *cift_kirma)
    {
        cift_kirma->setWindowTitle(QApplication::translate("cift_kirma", "Form", 0));
        background->setText(QString());
        Cift_Kirma_image->setText(QString());
        ArrowWinchUp_1->setText(QString());
        ArrowWinchUp_0->setText(QString());
        ArrowWinchUp_2->setText(QString());
        ArrowWinchDown_1->setText(QString());
        ArrowWinchDown_0->setText(QString());
        ArrowWinchDown_2->setText(QString());
        ArrowMainBoomUp_1->setText(QString());
        ArrowMainBoomUp_0->setText(QString());
        ArrowMainBoomUp_2->setText(QString());
        ArrowMainBoomDown_1->setText(QString());
        ArrowMainBoomDown_0->setText(QString());
        ArrowMainBoomDown_2->setText(QString());
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
        ArrowJibBoomUp_1->setText(QString());
        ArrowJibBoomUp_0->setText(QString());
        ArrowJibBoomUp_2->setText(QString());
        ArrowJibBoomDown_1->setText(QString());
        ArrowJibBoomDown_0->setText(QString());
        ArrowJibBoomDown_2->setText(QString());
        ArrowJibTelescopeIn_1->setText(QString());
        ArrowJibTelescopeIn_0->setText(QString());
        ArrowJibTelescopeIn_2->setText(QString());
        ArrowJibTelescopeOut_1->setText(QString());
        ArrowJibTelescopeOut_0->setText(QString());
        ArrowJibTelescopeOut_2->setText(QString());
        ArrowRotationLeft_1->setText(QString());
        ArrowRotationLeft_0->setText(QString());
        ArrowRotationLeft_2->setText(QString());
        ArrowRotationRight_1->setText(QString());
        ArrowRotationRight_0->setText(QString());
        ArrowRotationRight_2->setText(QString());
        Acikirma1->setText(QApplication::translate("cift_kirma", "<html><head/><body><p><span style=\" color:#000000;\">1.K\304\261rma A\303\247\304\261:</span></p></body></html>", 0));
        Acikirma1_deger->setText(QApplication::translate("cift_kirma", "<html><head/><body><p><span style=\" color:#000000;\">0.0\302\260</span></p></body></html>", 0));
        Acikirma2->setText(QApplication::translate("cift_kirma", "<html><head/><body><p><span style=\" color:#000000;\">2.K\304\261rma A\303\247\304\261:</span></p></body></html>", 0));
        Acikirma2_deger->setText(QApplication::translate("cift_kirma", "<html><head/><body><p><span style=\" color:#000000;\">0.0\302\260</span></p></body></html>", 0));
        P1Bar->setText(QApplication::translate("cift_kirma", "<html><head/><body><p><span style=\" color:#000000;\">P1:</span></p></body></html>", 0));
        P2Bar->setText(QApplication::translate("cift_kirma", "<html><head/><body><p><span style=\" color:#000000;\">P2:</span></p></body></html>", 0));
        P3Bar->setText(QApplication::translate("cift_kirma", "<html><head/><body><p><span style=\" color:#000000;\">P3:</span></p></body></html>", 0));
        P1BarDeger->setText(QApplication::translate("cift_kirma", "<html><head/><body><p><span style=\" color:#000000;\">0 Bar</span></p></body></html>", 0));
        P2BarDeger->setText(QApplication::translate("cift_kirma", "<html><head/><body><p><span style=\" color:#000000;\">0 Bar</span></p></body></html>", 0));
        P3BarDeger->setText(QApplication::translate("cift_kirma", "<html><head/><body><p><span style=\" color:#000000;\">0 Bar</span></p></body></html>", 0));
        mesaj->setText(QApplication::translate("cift_kirma", "<html><head/><body><p><span style=\" color:#c80000;\">TextLabel</span></p></body></html>", 0));
        label->setText(QString());
        Bypass_1->setText(QString());
        Bypass_0->setText(QString());
        MainBoomAci->setText(QApplication::translate("cift_kirma", "<html><head/><body><p><span style=\" color:#000000;\">Ana Bom A\303\247\304\261:</span></p></body></html>", 0));
        MainboomAciValue->setText(QApplication::translate("cift_kirma", "<html><head/><body><p><span style=\" color:#000000;\">0.0\302\260</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class cift_kirma: public Ui_cift_kirma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIFT_KIRMA_H
