#include "BaseWidget.h"

BaseWidget::BaseWidget(QWidget *parent) : QWidget(parent)
{
    DataInit();
    UiInit();
}

void BaseWidget::DataInit()
{
    AllowMove = false;
    MovePosition = QPoint();
}

void BaseWidget::UiInit()
{
    this->setFixedSize(900, 650);
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowTitleHint|Qt::WindowSystemMenuHint);
}

void BaseWidget::mousePressEvent(QMouseEvent *event)
{
    if ( event->button() == Qt::LeftButton )
    {
        if((this->pos().x() + 80) < event->globalPos().x() && \
           (this->pos().y() + 36) > event->globalPos().y())
        {
            setCursor(Qt::ClosedHandCursor);
            AllowMove = true;
            MovePosition = event->globalPos() - this->pos();
        }
    }
    return QWidget::mousePressEvent(event);
}

void BaseWidget::mouseMoveEvent(QMouseEvent *event)
{
    if ( AllowMove && (event->buttons() && Qt::LeftButton) \
        && (event->globalPos()-MovePosition).manhattanLength() > \
            QApplication::startDragDistance() )
    {
        this->move(event->globalPos()-MovePosition);
        MovePosition = event->globalPos() - this->pos();
    }

    return QWidget::mouseMoveEvent(event);
}


void BaseWidget::mouseReleaseEvent(QMouseEvent *event)
{
    AllowMove = false;
    setCursor(Qt::ArrowCursor);
    return QWidget::mouseReleaseEvent(event);
}
