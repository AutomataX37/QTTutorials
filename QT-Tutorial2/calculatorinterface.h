#ifndef CALCULATORINTERFACE_H
#define CALCULATORINTERFACE_H

#include <QWidget>

namespace Ui {
class CalculatorInterface;
}

class CalculatorInterface : public QWidget
{
    Q_OBJECT

public:
    explicit CalculatorInterface(QWidget *parent = 0);
    ~CalculatorInterface();

private:
    Ui::CalculatorInterface *ui;
};

#endif // CALCULATORINTERFACE_H
