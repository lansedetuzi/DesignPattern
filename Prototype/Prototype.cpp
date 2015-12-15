#include "Prototype.h"

#include <QDebug>

Prototype::Prototype()
{

}

Prototype *Prototype::clone()
{
    return nullptr;
}

ConcretePrototype::ConcretePrototype()
    : Prototype()
{

}

ConcretePrototype::ConcretePrototype(const ConcretePrototype &concretePrototype)
{
    qDebug() << "concretePrototype address: " << &concretePrototype;
    qDebug() << "a ConcretePrototype has copy with address: " << this;
}

Prototype *ConcretePrototype::clone()
{
    return new ConcretePrototype(*this);
}
