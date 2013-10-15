#ifndef MYRECT_H
#define MYRECT_H
#include "mycircle.h"


class MyRect : public MyCircle
{
public:
    MyRect(int value, QWidget *parent);

private:
 //int m_value;
  void drawMyFigure();


protected:
 void paintEvent(QPaintEvent *);
};



#endif // MYRECT_H
