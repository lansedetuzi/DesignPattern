#include "Proxy.h"

#include <QDebug>

Subject::Subject()
{

}

ConcreteSubject::ConcreteSubject()
    : Subject()
{

}

void ConcreteSubject::request()
{
    qDebug() << "ConcreteSubject::request";
}

Proxy::Proxy(Subject *subject)
{
    m_subject = subject;
}

Proxy::~Proxy()
{
    if (m_subject)
    {
        delete m_subject;
        m_subject = nullptr;
    }
}

void Proxy::request()
{
    m_subject->request();
}
