#include "AppWidget.h"

AppWidget::AppWidget(QWidget *parent)
    : QWidget(parent)
{
    DataInit();
    UiInit();
}

AppWidget::~AppWidget()
{

}

void AppWidget::DataInit()
{
    OverviewLt = new QVBoxLayout();
    AppName    = new QLabel();
    IconText   = new QLabel();
    InstallBt  = new QPushButton();
}

void AppWidget::UiInit()
{
    OverviewLt->addWidget(AppName);
    OverviewLt->addWidget(IconText);
    OverviewLt->addWidget(InstallBt);

    InstallBt->hide();

    AppName->setText("APP");
    InstallBt->setText("Install");
    IconText->setText("AppIcon");

    this->setLayout(OverviewLt);
}

void AppWidget::ConnectInit()
{}

void AppWidget::enterEvent(QEvent *event)
{
    InstallBt->show();
    IconText->hide();

    return QWidget::enterEvent(event);
}

void AppWidget::leaveEvent(QEvent *event)
{
    InstallBt->hide();
    IconText->show();

    return QWidget::leaveEvent(event);
}
