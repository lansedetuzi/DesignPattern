#ifndef SUBJECT_H
#define SUBJECT_H

#include <QList>
#include <QString>

class Observer;
class Subject
{
public:
    Subject();
    virtual ~Subject(){}

    virtual void attach(Observer *observer);
    virtual void detach(Observer *observer);
    virtual void notify();

    virtual void setState(const QString &state) = 0;
    virtual QString state() const = 0;

private:
    QList<Observer *> m_obList;
};

class ConcreteSubject : public Subject
{
public:
    ConcreteSubject();
    ~ConcreteSubject(){}

    void setState(const QString &state);
    QString state() const;

private:
    QString m_state;
};

#endif // SUBJECT_H
