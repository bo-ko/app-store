#include "ToolBt.h"

ToolBt::ToolBt(QWidget *parent) : QWidget(parent)
{
    DataInit();
    UiInit();
    ConnectInit();
}

void ToolBt::DataInit()
{
    ExitBt = new QPushButton(this);
    MiniBt = new QPushButton(this);
    MenuBt = new QPushButton(this);
    ToolMenu = new QMenu();
}

void ToolBt::UiInit()
{
    ExitBt->setFixedSize(32, 32);
    MiniBt->setFixedSize(32, 32);
    MenuBt->setFixedSize(32, 32);

    /* layout */
    ExitBt->setGeometry(96, 0, 32, 32);
    MiniBt->setGeometry(64, 0, 32, 32);
    MenuBt->setGeometry(32, 0, 32, 32);

    /* add menu action */
    ToolMenu->addAction("About");
    MenuBt->setMenu(ToolMenu);

    MiniBt->setToolTip("Mini");
    ExitBt->setToolTip("Exit");
    MenuBt->setToolTip("Menu");

    this->setFixedSize(128, 32);
}

void ToolBt::ConnectInit()
{
    connect(ExitBt, SIGNAL(clicked()), this, SIGNAL(Closed()));
    connect(MiniBt, SIGNAL(clicked()), this, SIGNAL(Minimi()));
}
