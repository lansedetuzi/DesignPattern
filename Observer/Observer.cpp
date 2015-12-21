#include "Observer.h"

#include <QDebug>

Observer::Observer()
    : m_state("")
{

}



ConcreteObserverA::ConcreteObserverA(Subject *sub)
{
    m_sub = sub;
    m_sub->attach(this);
}

ConcreteObserverA::~ConcreteObserverA()
{
    if (m_sub)
    {
        m_sub->detach(this);
        delete m_sub;
        m_sub = nullptr;
    }
}

void ConcreteObserverA::update(Subject *sub)
{
    printInfo();
    Q_UNUSED(sub)
}

void ConcreteObserverA::printInfo()
{
    qDebug() << "ConcreteObserverA::printInfo " << m_sub->state();
}

Subject *ConcreteObserverA::subject() const
{
    return m_sub;
}


ConcreteObserverB::ConcreteObserverB(Subject *sub)
{
    m_sub = sub;
    m_sub->attach(this);
}

ConcreteObserverB::~ConcreteObserverB()
{
    if (m_sub)
    {
        m_sub->detach(this);
        delete m_sub;
        m_sub = nullptr;
    }
}

void ConcreteObserverB::update(Subject *sub)
{
    printInfo();
    Q_UNUSED(sub)
}

void ConcreteObserverB::printInfo()
{
    qDebug() << "ConcreteObserverB::printInfo " << m_sub->state();
}

Subject *ConcreteObserverB::subject() const
{
    return m_sub;
}
