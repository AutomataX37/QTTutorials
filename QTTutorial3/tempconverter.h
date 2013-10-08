#ifndef TEMPCONVERTER_H
#define TEMPCONVERTER_H

#include <QObject>

class TempConverter : public QObject
{
    Q_OBJECT
public:
    TempConverter(QObject *parent = 0);
    int tempFahrenheit();

signals:
    void setTempCelsius(int);
    void setTempFahrenheit(int);

public slots:
    void tempCelsiusChanged(int);
    void tempFahrenheitChanged(int);

private:
    int m_tempCelsius; //notation "m_" = private member variable

};


#endif // TEMPCONVERTER_H
