#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "Product.h"

class AbstractProductA;
class AbstractProductB;
class AbstractFactory
{
public:
    explicit AbstractFactory();
    virtual ~AbstractFactory();

    virtual AbstractProductA* createProductA() = 0;
    virtual AbstractProductB* createProductB() = 0;
};

class CConcreteFactory1 : public AbstractFactory
{
public:
    explicit CConcreteFactory1();
    ~CConcreteFactory1();

    AbstractProductA* createProductA();
    AbstractProductB* createProductB();
};

class CConcreteFactory2 : public AbstractFactory
{
public:
    explicit CConcreteFactory2();
    ~CConcreteFactory2();

    AbstractProductA* createProductA();
    AbstractProductB* createProductB();
};

#endif // ABSTRACTFACTORY_H
