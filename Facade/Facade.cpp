#include "Facade.h"

#include <QDebug>

SubSys1::SubSys1()
{

}

void SubSys1::operation()
{
    qDebug() << "SubSys1::operation";
}

SubSys2::SubSys2()
{

}

void SubSys2::operation()
{
    qDebug() << "SubSys2::operation";
}

Facade::Facade()
{
    m_sys1 = new SubSys1();
    m_sys2 = new SubSys2();
}

void Facade::operation()
{
    if (m_sys1)
    {
        m_sys1->operation();
    }

    if (m_sys2)
    {
        m_sys2->operation();
    }
}




