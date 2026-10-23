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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FootActive
{
public:
    QLabel *label;

    void setupUi(QWidget *FootActive)
    {
        if (FootActive->objectName().isEmpty())
            FootActive->setObjectName(QStringLiteral("FootActive"));
        FootActive->resize(480, 272);
        label = new QLabel(FootActive);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 480, 272));
        label->setStyleSheet(QStringLiteral("image: url(:/Images/ayakgrubu_aktif.png);"));

        retranslateUi(FootActive);

        QMetaObject::connectSlotsByName(FootActive);
    } // setupUi

    void retranslateUi(QWidget *FootActive)
    {
        FootActive->setWindowTitle(QApplication::translate("FootActive", "Form", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FootActive: public Ui_FootActive {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOOTACTIVE_H
