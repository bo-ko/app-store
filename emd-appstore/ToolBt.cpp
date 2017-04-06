#include "ToolBt.h"

ToolBt::ToolBt(QWidget *parent) : QWidget(parent)
{
    //DataInit();
    UiInit();
    ConnectInit();
}

/*
void ToolBt::DataInit()
{
}
*/
void ToolBt::UiInit()
{
    ExitBt = new QPushButton(this);
    MiniBt = new QPushButton(this);
    MenuBt = new QPushButton(this);
    ToolMenu = new QMenu();
    QHBoxLayout *MainLt;
    MainLt = new QHBoxLayout();

    MainLt->setContentsMargins(0, 0, 0, 0);
    MainLt->setSpacing(0);

    ExitBt->setFixedSize(24, 24);
    MiniBt->setFixedSize(24, 24);
    MenuBt->setFixedSize(24, 24);

    MainLt->addWidget(MenuBt);
    MainLt->addWidget(MiniBt);
    MainLt->addWidget(ExitBt);

    /* add menu action */
    ToolMenu->addAction("About");
    MenuBt->setMenu(ToolMenu);

    MiniBt->setToolTip("Mini");
    ExitBt->setToolTip("Exit");
    MenuBt->setToolTip("Menu");

    this->setFixedSize(74, 24);
    this->setLayout(MainLt);
}

void ToolBt::ConnectInit()
{
    connect(ExitBt, SIGNAL(clicked()), this, SIGNAL(Closed()));
    connect(MiniBt, SIGNAL(clicked()), this, SIGNAL(Minimi()));
}
