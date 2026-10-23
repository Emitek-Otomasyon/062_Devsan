/********************************************************************************
** Form generated from reading UI file 'footactive.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOOTACTIVE_H
#define UI_FOOTACTIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FootActive
{
public:
    QLabel *label;
    QProgressBar *X_Eksi_Bargraph;
    QProgressBar *Y_Eksi_Bargraph;
    QProgressBar *X_Arti_Bargraph;
    QLabel *DengeTopu;
    QProgressBar *Y_Arti_Bargraph;
    QLabel *Y_Value;
    QLabel *x_ui;
    QLabel *X_Value;
    QLabel *y_ui;

    void setupUi(QWidget *FootActive)
    {
        if (FootActive->objectName().isEmpty())
            FootActive->setObjectName(QStringLiteral("FootActive"));
        FootActive->resize(480, 272);
        label = new QLabel(FootActive);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 480, 272));
        label->setStyleSheet(QStringLiteral("image: url(:/Images/ayakgrubu_aktif.png);"));
        X_Eksi_Bargraph = new QProgressBar(FootActive);
        X_Eksi_Bargraph->setObjectName(QStringLiteral("X_Eksi_Bargraph"));
        X_Eksi_Bargraph->setGeometry(QRect(29, 61, 31, 20));
        X_Eksi_Bargraph->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 2px solid #000000;\n"
"    background-color: rgb(61, 75, 81);\n"
"	border-radius:7px;\n"
"    text-align: center;\n"
"    color: transparent; /* Y\303\274zdelik yaz\304\261y\304\261 gizler */\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #00FF00;\n"
"    width: 5px; /* Dikey barlar i\303\247in height: 5px; olarak de\304\237i\305\237tirilmeli */\n"
"    margin: 1px; /* \303\207izgi \303\247izgi g\303\266r\303\274n\303\274m\303\274 veren bo\305\237luk */\n"
"}"));
        X_Eksi_Bargraph->setMaximum(20);
        X_Eksi_Bargraph->setValue(0);
        X_Eksi_Bargraph->setTextVisible(false);
        X_Eksi_Bargraph->setOrientation(Qt::Horizontal);
        X_Eksi_Bargraph->setInvertedAppearance(true);
        Y_Eksi_Bargraph = new QProgressBar(FootActive);
        Y_Eksi_Bargraph->setObjectName(QStringLiteral("Y_Eksi_Bargraph"));
        Y_Eksi_Bargraph->setGeometry(QRect(59, 81, 20, 31));
        Y_Eksi_Bargraph->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 2px solid #000000;\n"
"    background-color: rgb(61, 75, 81);\n"
"	border-radius:7px;\n"
"    text-align: center;\n"
"    color: transparent; /* Y\303\274zdelik yaz\304\261y\304\261 gizler */\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #00FF00;\n"
"    height: 5px; /* Dikey barlar i\303\247in height: 5px; olarak de\304\237i\305\237tirilmeli */\n"
"    margin: 1px; /* \303\207izgi \303\247izgi g\303\266r\303\274n\303\274m\303\274 veren bo\305\237luk */\n"
"}"));
        Y_Eksi_Bargraph->setMaximum(20);
        Y_Eksi_Bargraph->setValue(0);
        Y_Eksi_Bargraph->setTextVisible(true);
        Y_Eksi_Bargraph->setOrientation(Qt::Vertical);
        Y_Eksi_Bargraph->setInvertedAppearance(true);
        X_Arti_Bargraph = new QProgressBar(FootActive);
        X_Arti_Bargraph->setObjectName(QStringLiteral("X_Arti_Bargraph"));
        X_Arti_Bargraph->setGeometry(QRect(79, 61, 31, 20));
        X_Arti_Bargraph->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 2px solid #000000;\n"
"    background-color: rgb(61, 75, 81);\n"
"	border-radius:7px;\n"
"    text-align: center;\n"
"    color: transparent; /* Y\303\274zdelik yaz\304\261y\304\261 gizler */\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #00FF00;\n"
"    width: 5px; /* Dikey barlar i\303\247in height: 5px; olarak de\304\237i\305\237tirilmeli */\n"
"    margin: 1px; /* \303\207izgi \303\247izgi g\303\266r\303\274n\303\274m\303\274 veren bo\305\237luk */\n"
"}"));
        X_Arti_Bargraph->setMaximum(20);
        X_Arti_Bargraph->setValue(0);
        X_Arti_Bargraph->setTextVisible(false);
        X_Arti_Bargraph->setOrientation(Qt::Horizontal);
        DengeTopu = new QLabel(FootActive);
        DengeTopu->setObjectName(QStringLiteral("DengeTopu"));
        DengeTopu->setGeometry(QRect(62, 64, 15, 15));
        DengeTopu->setMinimumSize(QSize(15, 15));
        DengeTopu->setMaximumSize(QSize(15, 15));
        DengeTopu->setStyleSheet(QLatin1String("\n"
"    min-width: 15px;\n"
"    max-width: 15px;\n"
"    min-height: 15px;\n"
"    max-height: 15px;\n"
"    border: none;\n"
"    border-radius: 7px; \n"
"    background-color: #00FF00; \n"
""));
        Y_Arti_Bargraph = new QProgressBar(FootActive);
        Y_Arti_Bargraph->setObjectName(QStringLiteral("Y_Arti_Bargraph"));
        Y_Arti_Bargraph->setGeometry(QRect(60, 30, 20, 31));
        Y_Arti_Bargraph->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 2px solid #000000;\n"
"    background-color: rgb(61, 75, 81);\n"
"	border-radius:7px;\n"
"    text-align: center;\n"
"    color: transparent; /* Y\303\274zdelik yaz\304\261y\304\261 gizler */\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #00FF00;\n"
"    height: 5px; /* Dikey barlar i\303\247in height: 5px; olarak de\304\237i\305\237tirilmeli */\n"
"    margin: 1px; /* \303\207izgi \303\247izgi g\303\266r\303\274n\303\274m\303\274 veren bo\305\237luk */\n"
"}"));
        Y_Arti_Bargraph->setMaximum(20);
        Y_Arti_Bargraph->setValue(0);
        Y_Arti_Bargraph->setTextVisible(false);
        Y_Arti_Bargraph->setOrientation(Qt::Vertical);
        Y_Value = new QLabel(FootActive);
        Y_Value->setObjectName(QStringLiteral("Y_Value"));
        Y_Value->setGeometry(QRect(60, 120, 51, 20));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Mono"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        Y_Value->setFont(font);
        Y_Value->setStyleSheet(QStringLiteral("color:white;"));
        x_ui = new QLabel(FootActive);
        x_ui->setObjectName(QStringLiteral("x_ui"));
        x_ui->setGeometry(QRect(120, 60, 31, 20));
        x_ui->setFont(font);
        X_Value = new QLabel(FootActive);
        X_Value->setObjectName(QStringLiteral("X_Value"));
        X_Value->setGeometry(QRect(140, 60, 51, 20));
        X_Value->setFont(font);
        X_Value->setStyleSheet(QStringLiteral("color:white;"));
        y_ui = new QLabel(FootActive);
        y_ui->setObjectName(QStringLiteral("y_ui"));
        y_ui->setGeometry(QRect(40, 120, 31, 20));
        y_ui->setFont(font);

        retranslateUi(FootActive);

        QMetaObject::connectSlotsByName(FootActive);
    } // setupUi

    void retranslateUi(QWidget *FootActive)
    {
        FootActive->setWindowTitle(QApplication::translate("FootActive", "Form", 0));
        label->setText(QString());
        X_Eksi_Bargraph->setFormat(QString());
        Y_Eksi_Bargraph->setFormat(QString());
        X_Arti_Bargraph->setFormat(QString());
        DengeTopu->setText(QString());
        Y_Arti_Bargraph->setFormat(QString());
        Y_Value->setText(QApplication::translate("FootActive", "<html><head/><body><p><span style=\" color:#ffffff;\">0.0\302\260</span></p></body></html>", 0));
        x_ui->setText(QApplication::translate("FootActive", "<html><head/><body><p><span style=\" color:#ffffff;\">X:</span></p></body></html>", 0));
        X_Value->setText(QApplication::translate("FootActive", "<html><head/><body><p><span style=\" color:#ffffff;\">0.0\302\260</span></p></body></html>", 0));
        y_ui->setText(QApplication::translate("FootActive", "<html><head/><body><p><span style=\" color:#ffffff;\">Y:</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class FootActive: public Ui_FootActive {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOOTACTIVE_H
