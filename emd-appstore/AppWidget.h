#ifndef TESTWIDGET_H
#define TESTWIDGET_H

#include <QLabel>
#include <QWidget>
#include <QPixmap>
#include <QPushButton>
#include <QVBoxLayout>

class AppWidget : public QWidget
{
public:
    AppWidget(QWidget *parent = 0);

private:
    QLabel  *AppName;
    QLabel  *IconText;
    QPushButton *InstallBt;

    void UiInit();
    void DataInit();
    void ConnectInit();

protected:
    void enterEvent(QEvent *event);
    void leaveEvent(QEvent *event);
};

#endif // TESTWIDGET_H
