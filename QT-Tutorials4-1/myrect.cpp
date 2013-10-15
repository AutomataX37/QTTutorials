#include "myrect.h"
#include <QPainter>


MyRect::MyRect(int value, QWidget *parent):MyCircle(value, parent)
{

}

void MyRect::paintEvent(QPaintEvent *event)
{
 drawMyFigure();
}


void MyRect::drawMyFigure()
{
    int radius = width()/2;
    double factor = value()/100.0;

    QPainter p(this);
    p.setPen(Qt::black);
    //this draws the outside circle
    p.drawRect(0,0,width()-1,width()-1);
    //this changes the colour of the brush
    p.setBrush(Qt::black);
    //draw the inside circle
    p.drawRect((int)(radius*(1.0-factor)),
                  (int)(radius*(1.0-factor)),
                  (int)((width()-1)*factor)+1,
                  (int)((width()-1)*factor)+1);
}
