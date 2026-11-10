/********************************************************************************
** Form generated from reading UI file 'startup.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTUP_H
#define UI_STARTUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_startup
{
public:
    QLabel *background;

    void setupUi(QWidget *startup)
    {
        if (startup->objectName().isEmpty())
            startup->setObjectName(QStringLiteral("startup"));
        startup->resize(480, 272);
        background = new QLabel(startup);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 0, 480, 272));
        background->setStyleSheet(QStringLiteral(""));

        retranslateUi(startup);

        QMetaObject::connectSlotsByName(startup);
    } // setupUi

    void retranslateUi(QWidget *startup)
    {
        startup->setWindowTitle(QApplication::translate("startup", "Form", 0));
        background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class startup: public Ui_startup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTUP_H
