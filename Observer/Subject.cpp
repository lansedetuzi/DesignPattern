#include "Subject.h"

#include "Observer.h"

Subject::Subject()
{

}

void Subject::attach(Observer *observer)
{
    if (!m_obList.contains(observer))
    {
        m_obList.push_back(observer);
    }
}

void Subject::detach(Observer *observer)
{
    if (observer)
    {
        m_obList.removeOne(observer);
    }
}

void Subject::notify()
{
    foreach (Observer *observer, m_obList)
    {
        observer->update(this);
    }
}



ConcreteSubject::ConcreteSubject()
    : m_state("")
{

}

void ConcreteSubject::setState(const QString &state)
{
    m_state = state;
}

QString ConcreteSubject::state() const
{
    return m_state;
}
