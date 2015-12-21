#include "AbstractClass.h"

#include <QDebug>

AbstractClass::AbstractClass()
{
}

void AbstractClass::templateMethod()
{
    primitiveA();
    primitiveB();
}

ConcreteClass1::ConcreteClass1()
{

}

void ConcreteClass1::primitiveA()
{
    qDebug() << "ConcreteClass1::primitiveA";
}

void ConcreteClass1::primitiveB()
{
    qDebug() << "ConcreteClass1::primitiveB";
}

ConcreteClass2::ConcreteClass2()
{

}

void ConcreteClass2::primitiveA()
{
    qDebug() << "ConcreteClass2::primitiveA";
}

void ConcreteClass2::primitiveB()
{
    qDebug() << "ConcreteClass2::primitiveB";
}
