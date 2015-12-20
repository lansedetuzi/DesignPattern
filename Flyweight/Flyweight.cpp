#include "Flyweight.h"

#include <QDebug>

Flyweight::Flyweight(const QString &sIntrinsicState)
{
    m_sIntrinsicState = sIntrinsicState;
}

QString Flyweight::intrinsicState() const
{
    return m_sIntrinsicState;
}

ConcreteFlyweight::ConcreteFlyweight(const QString &sIntrinsicState)
    : Flyweight(sIntrinsicState)
{

}

void ConcreteFlyweight::operation(const QString &sIntrinsicState)
{
    qDebug() << intrinsicState() << ", " << sIntrinsicState;
}


FlyweightFactory::FlyweightFactory()
{

}

Flyweight *FlyweightFactory::flyweight(const QString &sIntrinsicState)
{
    QMap<QString, Flyweight*>::iterator iter = m_flyweightMap.begin();
    while (iter != m_flyweightMap.end())
    {
        if ((*iter)->intrinsicState() == sIntrinsicState)
        {
            qDebug() << sIntrinsicState << " flyweight has been created.";
            return *iter;
        }
        ++iter;
    }

    Flyweight *pFlyweight = new ConcreteFlyweight(sIntrinsicState);
    m_flyweightMap.insert(sIntrinsicState, pFlyweight);

    return pFlyweight;
}
