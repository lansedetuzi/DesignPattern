#include "Mediator.h"

College::College()
    : m_mediator(NULL)
{

}

College::College(Mediator *mediator)
    : m_mediator(mediator)
{

}

ConcreteCollegeA::ConcreteCollegeA()
    : College()
    , m_state("")
{

}

ConcreteCollegeA::ConcreteCollegeA(Mediator *mediator)
    : College(mediator)
    , m_state("")
{

}

void ConcreteCollegeA::setState(const QString &state)
{
    m_state = state;
}

QString ConcreteCollegeA::state() const
{
    return m_state;
}

void ConcreteCollegeA::doAction()
{
    m_mediator->doActionFromBToA();
}

ConcreteCollegeB::ConcreteCollegeB()
    : College()
{

}

ConcreteCollegeB::ConcreteCollegeB(Mediator *mediator)
{
    m_mediator = mediator;
}

void ConcreteCollegeB::setState(const QString &state)
{
    m_state = state;
}

QString ConcreteCollegeB::state() const
{
    return m_state;
}

void ConcreteCollegeB::doAction()
{
    m_mediator->doActionFromAToB();
}

Mediator::Mediator()
{

}


ConcreteMediator::ConcreteMediator()
    : Mediator()
    , m_collegeA(NULL)
    , m_collegeB(NULL)
{

}

ConcreteMediator::ConcreteMediator(ConcreteCollegeA *collegeA, ConcreteCollegeB *collegeB)
    : Mediator()
    , m_collegeA(collegeA)
    , m_collegeB(collegeB)
{

}

void ConcreteMediator::doActionFromAToB()
{
    if (m_collegeA && m_collegeB)
    {
        m_collegeB->setState(m_collegeA->state());
    }
}

void ConcreteMediator::doActionFromBToA()
{
    if (m_collegeA && m_collegeB)
    {
        m_collegeA->setState(m_collegeB->state());
    }
}

void ConcreteMediator::setCollegeA(ConcreteCollegeA *collegeA)
{
    m_collegeA = collegeA;
}

void ConcreteMediator::setCollegeB(ConcreteCollegeB *collegeB)
{
    m_collegeB = collegeB;
}

ConcreteCollegeA *ConcreteMediator::collegeA() const
{
    return m_collegeA;
}

ConcreteCollegeB *ConcreteMediator::collegeB() const
{
    return m_collegeB;
}

void ConcreteMediator::initCollege(ConcreteCollegeA *collegeA, ConcreteCollegeB *collegeB)
{
    m_collegeA = collegeA;
    m_collegeB = collegeB;
}
