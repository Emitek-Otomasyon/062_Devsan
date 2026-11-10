/********************************************************************************
** Form generated from reading UI file 'goruntu.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GORUNTU_H
#define UI_GORUNTU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_goruntu
{
public:
    QLabel *l_camera;
    QLabel *l_scritta;

    void setupUi(QWidget *goruntu)
    {
        if (goruntu->objectName().isEmpty())
            goruntu->setObjectName(QStringLiteral("goruntu"));
        goruntu->resize(480, 272);
        l_camera = new QLabel(goruntu);
        l_camera->setObjectName(QStringLiteral("l_camera"));
        l_camera->setGeometry(QRect(160, 70, 161, 161));
        l_camera->setPixmap(QPixmap(QString::fromUtf8(":/Images/telecamera.png")));
        l_camera->setAlignment(Qt::AlignCenter);
        l_scritta = new QLabel(goruntu);
        l_scritta->setObjectName(QStringLiteral("l_scritta"));
        l_scritta->setGeometry(QRect(170, 30, 140, 25));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans Mono"));
        font.setBold(true);
        font.setWeight(75);
        l_scritta->setFont(font);
        l_scritta->setStyleSheet(QStringLiteral("color: black;"));

        retranslateUi(goruntu);

        QMetaObject::connectSlotsByName(goruntu);
    } // setupUi

    void retranslateUi(QWidget *goruntu)
    {
        goruntu->setWindowTitle(QApplication::translate("goruntu", "Form", 0));
        l_scritta->setText(QApplication::translate("goruntu", "BEKLENIYOR...", 0));
    } // retranslateUi

};

namespace Ui {
    class goruntu: public Ui_goruntu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GORUNTU_H
