#ifndef PLUGINPAGE_H
#define PLUGINPAGE_H

#include "AppWidget.h"

#include <QWidget>
#include <QTabWidget>

class PluginPage : public QWidget
{
    Q_OBJECT
public:
    explicit PluginPage(QWidget *parent = 0);

signals:

public slots:

private:
    void UiInit();
    void DataInit();
    void ConnectInit();
};

#endif // PLUGINPAGE_H
