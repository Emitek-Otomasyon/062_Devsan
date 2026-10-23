/********************************************************************************
** Form generated from reading UI file 'scanrecotemplate.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCANRECOTEMPLATE_H
#define UI_SCANRECOTEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScanrecoTemplate
{
public:
    QLabel *sayac;
    QLabel *mesaj;

    void setupUi(QWidget *ScanrecoTemplate)
    {
        if (ScanrecoTemplate->objectName().isEmpty())
            ScanrecoTemplate->setObjectName(QStringLiteral("ScanrecoTemplate"));
        ScanrecoTemplate->resize(480, 272);
        ScanrecoTemplate->setMaximumSize(QSize(480, 272));
        ScanrecoTemplate->setCursor(QCursor(Qt::ArrowCursor));
        ScanrecoTemplate->setContextMenuPolicy(Qt::DefaultContextMenu);
        ScanrecoTemplate->setAcceptDrops(false);
        ScanrecoTemplate->setAutoFillBackground(false);
        ScanrecoTemplate->setStyleSheet(QStringLiteral("background: white;"));
        sayac = new QLabel(ScanrecoTemplate);
        sayac->setObjectName(QStringLiteral("sayac"));
        sayac->setGeometry(QRect(0, 0, 480, 272));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Mono"));
        font.setPointSize(72);
        font.setBold(true);
        font.setWeight(75);
        sayac->setFont(font);
        sayac->setStyleSheet(QStringLiteral("background-color: white;"));
        sayac->setAlignment(Qt::AlignCenter);
        sayac->setWordWrap(false);
        mesaj = new QLabel(ScanrecoTemplate);
        mesaj->setObjectName(QStringLiteral("mesaj"));
        mesaj->setGeometry(QRect(0, 252, 415, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu Mono"));
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        mesaj->setFont(font1);
        mesaj->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 170);"));
        mesaj->setAlignment(Qt::AlignCenter);

        retranslateUi(ScanrecoTemplate);

        QMetaObject::connectSlotsByName(ScanrecoTemplate);
    } // setupUi

    void retranslateUi(QWidget *ScanrecoTemplate)
    {
        ScanrecoTemplate->setWindowTitle(QApplication::translate("ScanrecoTemplate", "ScanrecoTemplate", 0));
        sayac->setText(QApplication::translate("ScanrecoTemplate", "<html><head/><body><p><span style=\" font-weight:600; color:#000000;\">TEMPLATE</span></p></body></html>", 0));
        mesaj->setText(QApplication::translate("ScanrecoTemplate", "<html><head/><body><p><span style=\" color:#c80000;\">TextLabel</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class ScanrecoTemplate: public Ui_ScanrecoTemplate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCANRECOTEMPLATE_H
