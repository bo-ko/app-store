#include "MainWidget.h"

MainWidget::MainWidget(QWidget *parent) : BaseWidget(parent)
{
    DataInit();
    UiInit();
    ConnectInit();
}

void MainWidget::DataInit()
{
    MainLt         = new QHBoxLayout();
    CtrlLt         = new QVBoxLayout();
    BodyLt         = new QVBoxLayout();
    MainToolBt     = new ToolBt();
    LogoImage      = new QLabel();
    HomePageBt     = new QPushButton();
    AllPageBt      = new QPushButton();
    UpdatePageBt   = new QPushButton();
    RemovePageBt   = new QPushButton();
    DownloadPageBt = new QPushButton();
    CtrlWidget     = new QWidget();

    ToolBarWidget  = new QWidget();
    ToolBarLt      = new QHBoxLayout();
    BackPageBt     = new QPushButton();
    SearchBt       = new QPushButton();
    SearchLine     = new QLineEdit();
}

void MainWidget::UiInit()
{
    MainLt->addWidget(CtrlWidget);
    MainLt->addLayout(BodyLt);

    BodyLt->addWidget(ToolBarWidget);
    BodyLt->addStretch();

    ToolBarWidget->setFixedSize(this->width()-80, 36);
    ToolBarWidget->setLayout(ToolBarLt);
    ToolBarLt->addSpacing(12);
    ToolBarLt->addWidget(BackPageBt, 0, Qt::AlignLeft);
    ToolBarLt->addSpacing(6);
    ToolBarLt->addWidget(SearchLine);
    ToolBarLt->addStretch();
    ToolBarLt->addWidget(MainToolBt, 0, Qt::AlignTop | Qt::AlignRight);
    ToolBarLt->setContentsMargins(0, 0, 0, 0);
    CtrlLt->setContentsMargins(0, 0, 0, 0);
    BodyLt->setContentsMargins(0, 0, 0, 0);
    MainLt->setMargin(0);
    MainLt->setSpacing(0);

    SearchBt->setCursor(Qt::PointingHandCursor);
    SearchBt->setFixedSize(22, 22);
    SearchBt->setToolTip("Search");

    QMargins margins = SearchLine->textMargins();
    SearchLine->setTextMargins(margins.left(), margins.top(), \
                               SearchBt->width(), margins.bottom());
    SearchLine->setPlaceholderText("Enter search content");
    SearchLine->setFixedSize(240, 24);
    QHBoxLayout *SearchLayout = new QHBoxLayout();
    SearchLayout->addStretch();
    SearchLayout->addWidget(SearchBt);
    SearchLayout->setSpacing(0);
    SearchLayout->setContentsMargins(0, 0, 0, 0);
    SearchLine->setLayout(SearchLayout);

    CtrlWidget->setLayout(CtrlLt);
    CtrlLt->addWidget(LogoImage, 0, Qt::AlignHCenter | Qt::AlignVCenter);
    CtrlLt->addStretch();
    CtrlLt->addWidget(HomePageBt);
    CtrlLt->addStretch();
    CtrlLt->addWidget(AllPageBt);
    CtrlLt->addStretch();
    CtrlLt->addWidget(UpdatePageBt);
    CtrlLt->addStretch();
    CtrlLt->addWidget(RemovePageBt);
    CtrlLt->addStretch();
    CtrlLt->addWidget(DownloadPageBt);
    QPixmap IconPixmap(":/data/images/applications");
    LogoImage->setPixmap(IconPixmap);

    CtrlWidget->setFixedSize(80, this->height());

    /* qss object */
    CtrlWidget->setObjectName("CtrlWidget");
    ToolBarWidget->setObjectName("ToolBarWidget");
    SearchBt->setObjectName("SearchBt");
    BackPageBt->setObjectName("BackPageBt");

    this->setLayout(MainLt);
}

void MainWidget::ConnectInit()
{
    connect(MainToolBt, SIGNAL(Closed()), this, SLOT(close()));
    connect(MainToolBt, SIGNAL(Minimi()), this, SLOT(showMinimized()));
}
