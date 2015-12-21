#ifndef OBSERVER_H
#define OBSERVER_H

#include "Subject.h"

class Observer
{
public:
    Observer();
    ~Observer(){}

    virtual void update(Subject *sub) = 0;
    virtual void printInfo() = 0;

private:
    QString m_state;
};

class ConcreteObserverA : public Observer
{
public:
    ConcreteObserverA(Subject *sub);
    virtual ~ConcreteObserverA();

    void update(Subject *sub);
    void printInfo();
    virtual Subject* subject() const;

private:
    Subject *m_sub;
};

class ConcreteObserverB : public Observer
{
public:
    ConcreteObserverB(Subject *sub);
    virtual ~ConcreteObserverB();

    void update(Subject *sub);
    void printInfo();
    virtual Subject* subject() const;

private:
    Subject *m_sub;
};

#endif // OBSERVER_H
