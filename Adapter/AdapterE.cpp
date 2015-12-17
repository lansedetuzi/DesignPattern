#include "AdapterE.h"

#include <QDebug>

TargetE::TargetE()
{

}

void TargetE::request()
{
    qDebug() << "TargetE::request";
}

Adaptee::Adaptee()
{

}

void Adaptee::specialRequest()
{
    qDebug() << "Adaptee::specialRequest";
}

AdapterE::AdapterE()
{

}

void AdapterE::request()
{
    specialRequest();
}
