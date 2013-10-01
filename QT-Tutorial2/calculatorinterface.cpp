#include "calculatorinterface.h"
#include "ui_calculatorinterface.h"

CalculatorInterface::CalculatorInterface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CalculatorInterface)
{
    ui->setupUi(this);
}

CalculatorInterface::~CalculatorInterface()
{
    delete ui;
}
