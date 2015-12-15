#include "AbstractionImp.h"

#include <QDebug>

AbstractionImp::AbstractionImp()
{

}

void AbstractionImp::operation()
{
    qDebug() << "AbstractionImp operation.";
}

ConcreteAbstractionImpA::ConcreteAbstractionImpA()
    : AbstractionImp()
{

}

void ConcreteAbstractionImpA::operation()
{
    qDebug() << "ConcreteAbstractionImpA operation.";
}


ConcreteAbstractionImpB::ConcreteAbstractionImpB()
    : AbstractionImp()
{

}

void ConcreteAbstractionImpB::operation()
{
    qDebug() << "ConcreteAbstractionImpB operation.";
}
