#include "Factory.h"

#include <QDebug>

AbstractFactory::AbstractFactory()
{
    qDebug() << "create AbstractFactory";
}

AbstractFactory::~AbstractFactory()
{
    qDebug() << "destroy AbstractFactory";
}

CConcreteFactory1::CConcreteFactory1()
{
    qDebug() << "create CConcreteFactory1";
}

CConcreteFactory1::~CConcreteFactory1()
{
    qDebug() << "destroy CConcreteFactory1";
}

AbstractProductA *CConcreteFactory1::createProductA()
{
    return new CConcreteProductA1();
}

AbstractProductB *CConcreteFactory1::createProductB()
{
    return new CConcreteProductB1();
}

CConcreteFactory2::CConcreteFactory2()
{
    qDebug() << "create CConcreteFactory2";
}

CConcreteFactory2::~CConcreteFactory2()
{
    qDebug() << "destroy CConcreteFactory2";
}

AbstractProductA *CConcreteFactory2::createProductA()
{
    return new CConcreteProductA2();
}

AbstractProductB *CConcreteFactory2::createProductB()
{
    return new CConcreteProductB2();
}
