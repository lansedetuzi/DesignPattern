#include "Builder.h"

#include <QDebug>

Product::Product()
{

}

Builder::Builder()
{

}

ConcreteBuilder::ConcreteBuilder()
    : Builder()
{

}

void ConcreteBuilder::buildPartA(const QString &partA)
{
    qDebug() << "buildPartA: para " << partA;
}

void ConcreteBuilder::buildPartB(const QString &partB)
{
    qDebug() << "buildPartB: para " << partB;
}

void ConcreteBuilder::buildPartC(const QString &partC)
{
    qDebug() << "buildPartC: para " << partC;
}

Product *ConcreteBuilder::product()
{
    buildPartA("A");
    buildPartB("B");
    buildPartC("C");

    return new Product();
}
