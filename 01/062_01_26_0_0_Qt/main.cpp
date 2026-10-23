#include "scanrecotemplate.h"
#include <QApplication>
#include <QDebug>
#include "applicationmanager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
      ApplicationManager appManager;
      if(!appManager.create()) {
      qDebug() << "Couldn't create application manager!";
      }
//    ScanrecoTemplate w;
//    w.show();

    return a.exec();
}


