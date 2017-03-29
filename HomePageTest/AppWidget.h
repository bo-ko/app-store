#ifndef WIDGET_H
#define WIDGET_H


#include <QLabel>
#include <QWidget>
#include <QPixmap>
#include <QPushButton>
#include <QVBoxLayout>

class AppWidget : public QWidget
{
    Q_OBJECT

public:
    AppWidget(QWidget *parent = 0);
    ~AppWidget();

private:
    QLabel  *AppName;
    QLabel  *IconText;
    QPushButton *InstallBt;
    QVBoxLayout *OverviewLt;

    void DataInit();
    void UiInit();
    void ConnectInit();

protected:
    void enterEvent(QEvent *event);
    void leaveEvent(QEvent *event);
};

#endif // WIDGET_H
