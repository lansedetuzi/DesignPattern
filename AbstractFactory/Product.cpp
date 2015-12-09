#include "Product.h"

#include <QDebug>

AbstractProductA::AbstractProductA()
{
    qDebug() << "create AbstractProductA";
}

AbstractProductA::~AbstractProductA()
{
    qDebug() << "destroy AbstractProductA";
}

AbstractProductB::AbstractProductB()
{
    qDebug() << "create AbstractProductB";
}

AbstractProductB::~AbstractProductB()
{
    qDebug() << "destroy AbstractProductB";
}

CConcreteProductA1::CConcreteProductA1()
{
    qDebug() << "create CConcreteProductA1";
}

CConcreteProductA1::~CConcreteProductA1()
{
    qDebug() << "destroy CConcreteProductA1";
}

CConcreteProductA2::CConcreteProductA2()
{
    qDebug() << "create CConcreteProductA2";
}

CConcreteProductA2::~CConcreteProductA2()
{
    qDebug() << "destroy CConcreteProductA2";
}

CConcreteProductB1::CConcreteProductB1()
{
    qDebug() << "create CConcreteProductB1";
}

CConcreteProductB1::~CConcreteProductB1()
{
    qDebug() << "destroy CConcreteProductB1";
}

CConcreteProductB2::CConcreteProductB2()
{
    qDebug() << "create CConcreteProductB2";
}

CConcreteProductB2::~CConcreteProductB2()
{
    qDebug() << "destroy CConcreteProductB2";
}
