#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include <QMap>
#include <QString>

class Flyweight
{
public:
    Flyweight(const QString &sIntrinsicState);
    ~Flyweight(){}

    virtual void operation(const QString &sIntrinsicState) = 0;
    QString intrinsicState() const;

private:
    QString m_sIntrinsicState;
};

class ConcreteFlyweight : public Flyweight
{
public:
    ConcreteFlyweight(const QString &sIntrinsicState);
    ~ConcreteFlyweight(){}

    void operation(const QString &sIntrinsicState);
};

class FlyweightFactory
{
public:
    FlyweightFactory();
    ~FlyweightFactory(){}

    Flyweight* flyweight(const QString &sIntrinsicState);

private:
    QMap<QString, Flyweight *> m_flyweightMap;
};

#endif // FLYWEIGHT_H
