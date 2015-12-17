#include "Decorator.h"

#include <QDebug>

Component::Component()
{

}

ConcreteComponent::ConcreteComponent()
    : Component()
{

}

void ConcreteComponent::operation()
{
    qDebug() << "ConcreteComponent::operation";
}

Decorator::Decorator(Component *component)
{
    m_component = component;
}

void Decorator::operation()
{
    qDebug() << "Decorator::operation";
}

ConcreateDecorator::ConcreateDecorator(Component *Component)
    : Decorator(Component)
{

}

void ConcreateDecorator::operation()
{
    m_component->operation();
    addOperation();
}

void ConcreateDecorator::addOperation()
{
    qDebug() << "ConcreateDecorator::addOperation";
}
