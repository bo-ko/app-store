#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include "BaseWidget.h"
#include "ToolBt.h"

#include <QLabel>
#include <QWidget>
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
    QHBoxLayout *MainLt;
    QVBoxLayout *CtrlLt;
    QVBoxLayout *BodyLt;

    ToolBt *MainToolBt;
    QWidget *ToolBarWidget;
    QHBoxLayout *ToolBarLt;
    QPushButton *BackPageBt;
    QPushButton *SearchBt;
    QLineEdit   *SearchLine;


    QWidget *CtrlWidget;
    QLabel *LogoImage;
    QPushButton *HomePageBt;
    QPushButton *AllPageBt;
    QPushButton *UpdatePageBt;
    QPushButton *RemovePageBt;
    QPushButton *DownloadPageBt;


    void UiInit();
    void DataInit();
    void ConnectInit();
};

#endif // MAINWIDGET_H
