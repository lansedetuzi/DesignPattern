#include "Iterator.h"

#include <QDebug>

Aggregate::Aggregate()
{

}

ConcreteAggregate::ConcreteAggregate()
    : Aggregate()
{

}

Iterator *ConcreteAggregate::createIterator()
{
    return new ConcreteIterator(this);
}

void ConcreteAggregate::append(QObject *obj)
{
    m_list.push_back(obj);
}

QObject* ConcreteAggregate::item(int index)
{
    if (index < size())
    {
        return m_list[index];
    }
    else
    {
        return new QObject;
    }
}

int ConcreteAggregate::size()
{
    return m_list.size();
}

Iterator::Iterator()
{

}

ConcreteIterator::ConcreteIterator()
    : m_aggregate(NULL)
    , m_nIndex(0)
{

}

ConcreteIterator::ConcreteIterator(Aggregate *aggregate)
    : Iterator()
    , m_aggregate(aggregate)
    , m_nIndex(0)
{

}

QObject *ConcreteIterator::First()
{
    return m_aggregate->item(0);
}

void ConcreteIterator::Next()
{
    if (m_nIndex < m_aggregate->size())
    {
        m_nIndex++;
    }
    else
    {
        qDebug() << "out of bound.";
        return;
    }
}

bool ConcreteIterator::IsDone()
{
    return (m_nIndex < m_aggregate->size());
}

QObject* ConcreteIterator::CurrentItem()
{
    if (m_nIndex < m_aggregate->size())
    {
        return m_aggregate->item(m_nIndex);
    }
    else
    {
        qDebug() << "out of bound.";
        return new QObject;
    }
}
