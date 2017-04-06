#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include "ToolBt.h"
#include "BaseWidget.h"

#include <QLabel>
#include <QWidget>
#include <QPixmap>
#include <QMargins>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>

class MainWidget : public BaseWidget
{
    Q_OBJECT
public:
    explicit MainWidget(QWidget *parent = 0);

signals:

public slots:

private:
    ToolBt *MainToolBt;

    void UiInit();
    void DataInit();
    void ConnectInit();
};

#endif // MAINWIDGET_H
