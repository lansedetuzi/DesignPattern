#include "Handle.h"

#include <QDebug>

Handle::Handle()
    : m_succ(NULL)
{

}

Handle::Handle(Handle *succ)
    : m_succ(succ)
{

}

Handle::~Handle()
{
    if (m_succ)
    {
        delete m_succ;
        m_succ = nullptr;
    }
}

void Handle::setSuccessor(Handle *succ)
{
    m_succ = succ;
}

Handle *Handle::successor() const
{
    return m_succ;
}


ConcreteHandleA::ConcreteHandleA()
    : Handle()
{

}

void ConcreteHandleA::handleRequest()
{
    if (successor())
    {
        qDebug() << "ConcreteHandleA, i pass the right to next successor: " << successor();
        successor()->handleRequest();
    }
    else
    {
        qDebug() << "ConcreteHandleA, no next successor, i deal it by myself.";
    }
}

ConcreteHandleB::ConcreteHandleB()
    : Handle()
{

}

void ConcreteHandleB::handleRequest()
{
    if (successor())
    {
        qDebug() << "ConcreteHandleB, i pass the right to next successor: " << successor();
        successor()->handleRequest();
    }
    else
    {
        qDebug() << "ConcreteHandleB, no next successor, i deal it by myself.";
    }
}
