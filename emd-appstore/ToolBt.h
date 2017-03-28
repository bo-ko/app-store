#ifndef TOOLBT_H
#define TOOLBT_H

#include <QMenu>
#include <QWidget>
#include <QPushButton>

class ToolBt : public QWidget
{
    Q_OBJECT
public:
    explicit ToolBt(QWidget *parent = 0);

private:
    QPushButton *ExitBt; // close
    QPushButton *MiniBt; // minimize
    QPushButton *MenuBt; // menu
    QMenu       *ToolMenu;

    void DataInit();
    void UiInit();
    void ConnectInit();

signals:
    void Minimi();
    void Closed();

public slots:
};

#endif // TOOLBT_H
