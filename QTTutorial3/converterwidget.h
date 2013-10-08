#ifndef CONVERTERWIDGET_H
#define CONVERTERWIDGET_H

#include <QWidget>

namespace Ui {
class ConverterWidget;
}

class ConverterWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ConverterWidget(QWidget *parent = 0);
    ~ConverterWidget();

private:
    Ui::ConverterWidget *ui;
};

#endif // CONVERTERWIDGET_H
