#ifndef WIDGET_H
#define WIDGET_H
#include "mycircle.h"
#include "myrect.h"

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();


private:
    Ui::Widget *ui;
    MyCircle *c;
    MyRect *r;

};

#endif // WIDGET_H
