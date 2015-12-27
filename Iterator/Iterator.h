#ifndef ITERATOR_H
#define ITERATOR_H

#include <QList>
#include <QObject>

class Iterator;
class Aggregate
{
public:
    Aggregate();
    ~Aggregate(){}

public:
    virtual Iterator* createIterator() = 0;
    virtual void append(QObject *obj) = 0;
    virtual QObject* item(int index) = 0;
    virtual int size() = 0;
};

class ConcreteAggregate : public Aggregate
{
public:
    ConcreteAggregate();
    ~ConcreteAggregate(){}

public:
    Iterator* createIterator();
    void append(QObject *obj);
    QObject *item(int index);
    int size();

private:
    QList<QObject *> m_list;
};

class Iterator
{
public:
    Iterator();
    ~Iterator(){}

public:
    virtual QObject* First() = 0;
    virtual void Next() = 0;
    virtual bool IsDone() = 0;
    virtual QObject* CurrentItem() = 0;
};

class ConcreteIterator : public Iterator
{
public:
    ConcreteIterator();
    ConcreteIterator(Aggregate *aggregate);
    ~ConcreteIterator(){}

public:
    QObject* First();
    void Next();
    bool IsDone();
    QObject* CurrentItem();

protected:
    Aggregate *m_aggregate;
    int m_nIndex;
};

#endif // ITERATOR_H
