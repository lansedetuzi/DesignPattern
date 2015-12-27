#include "Visitor.h"

#include <QDebug>

Visitor::Visitor()
{

}

ConcreteVisitorA::ConcreteVisitorA()
    : Visitor()
{

}

void ConcreteVisitorA::visitConcreteElementA(Element *element)
{
    qDebug() << "ConcreteVisitorA visit:" << element;
}

void ConcreteVisitorA::visitConcreteElementB(Element *element)
{
    qDebug() << "ConcreteVisitorA visit:" << element;
}

ConcreteVisitorB::ConcreteVisitorB()
    : Visitor()
{

}

void ConcreteVisitorB::visitConcreteElementA(Element *element)
{
    qDebug() << "ConcreteVisitorB visit:" << element;
}

void ConcreteVisitorB::visitConcreteElementB(Element *element)
{
    qDebug() << "ConcreteVisitorB visit:" << element;
}

Element::Element()
{

}

ConcreteElementA::ConcreteElementA()
    : Element()
{

}

void ConcreteElementA::Accept(Visitor *visitor)
{
    if (visitor)
    {
        visitor->visitConcreteElementA(this);
    }
}


ConcreteElementB::ConcreteElementB()
    : Element()
{

}

void ConcreteElementB::Accept(Visitor *visitor)
{
    if (visitor)
    {
        visitor->visitConcreteElementB(this);
    }
}
