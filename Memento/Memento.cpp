#include "Memento.h"

#include <QDebug>

Originator::Originator()
    : m_state("")
    , m_memento(NULL)
{

}

Originator::Originator(QString state)
    : m_state(state)
    , m_memento(NULL)
{

}

Memento *Originator::createMemento()
{
    return new Memento(m_state);
}

void Originator::setMemento(Memento *memento)
{
    m_memento = memento;
}

void Originator::restoreMemento(const Memento *memento)
{
    setState(memento->state());
}

void Originator::setState(const QString &state)
{
    m_state = state;
}

QString Originator::state() const
{
    return m_state;
}

void Originator::printStateInfo()
{
    qDebug() << m_state;
}

Memento::Memento()
{

}

Memento::Memento(QString state)
    : m_state(state)
{

}

void Memento::setState(const QString &state)
{
    m_state = state;
}

QString Memento::state() const
{
    return m_state;
}
