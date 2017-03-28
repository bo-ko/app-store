#ifndef BASEWIDGET_H
#define BASEWIDGET_H

#include <QPoint>
#include <QWidget>
#include <QMouseEvent>
#include <QApplication>

class BaseWidget : public QWidget
{
    Q_OBJECT
public:
    explicit BaseWidget(QWidget *parent = 0);

signals:

public slots:

private:
    bool AllowMove;
    QPoint MovePosition;

    void UiInit();
    void DataInit();

protected:
    void mouseMoveEvent(QMouseEvent *event);   /* 鼠标移动 */
    void mousePressEvent(QMouseEvent *event);  /* 鼠标按下 */
    void mouseReleaseEvent(QMouseEvent *event); /* 鼠标释放 */
};

#endif // BASEWIDGET_H
