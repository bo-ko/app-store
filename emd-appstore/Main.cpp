#include "MainWidget.h"

#include <QFile>
#include <QString>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QFile styleFile(":/data/qss/qss.qss");
    styleFile.open(QIODevice::ReadOnly);
    QString setStyleSheet(styleFile.readAll());;
    a.setStyleSheet(setStyleSheet);

    MainWidget w;
    w.show();

    return a.exec();
}
