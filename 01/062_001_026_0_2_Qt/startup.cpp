#include "startup.h"
#include "ui_startup.h"
#include "scanrecoviewmaster.h"
#include <QtGui>
#include <QDebug>


startup::startup(QWidget *parent) :
    View(parent),
    ui(new Ui::startup)
{
    ui->setupUi(this);
}

startup::~startup()
{
    delete ui;
}

void startup::initGraphics()
{
#ifdef CUSTOM_PAINTING
    this->repaint();
#endif
}
