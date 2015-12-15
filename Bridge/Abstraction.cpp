#include "Abstraction.h"

#include <QDebug>

Abstraction::Abstraction()
{

}

void Abstraction::operation()
{
    qDebug() << "Abstraction operation.";
}

RefinedAbstraction::RefinedAbstraction(AbstractionImp *abstractImp)
    : Abstraction()
    , m_abstractImp(abstractImp)
{

}

void RefinedAbstraction::operation()
{
    m_abstractImp->operation();
}
