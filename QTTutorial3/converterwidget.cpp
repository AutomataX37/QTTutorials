#include "converterwidget.h"
#include "ui_converterwidget.h"

ConverterWidget::ConverterWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConverterWidget)
{
    ui->setupUi(this);

}

ConverterWidget::~ConverterWidget()
{
    delete ui;
}
