#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include "AppWidget.h"

#include <QWidget>

class HomePage : public QWidget
{
    Q_OBJECT
public:
    explicit HomePage(QWidget *parent = 0);

signals:

public slots:

private:
    void DataInit();
    void UiInit();
    void ConnectInit();
};

#endif // HOMEPAGE_H
