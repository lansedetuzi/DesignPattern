#ifndef ABSTRACTPRODUCT_H
#define ABSTRACTPRODUCT_H

class AbstractProductA
{
public:
    explicit AbstractProductA();
    virtual ~AbstractProductA();
};

class AbstractProductB
{
public:
    explicit AbstractProductB();
    virtual ~AbstractProductB();
};

class CConcreteProductA1 : public AbstractProductA
{
public:
    explicit CConcreteProductA1();
    ~CConcreteProductA1();
};

class CConcreteProductA2 : public AbstractProductA
{
public:
    explicit CConcreteProductA2();
    ~CConcreteProductA2();
};

class CConcreteProductB1 : public AbstractProductB
{
public:
    explicit CConcreteProductB1();
    ~CConcreteProductB1();
};

class CConcreteProductB2 : public AbstractProductB
{
public:
    explicit CConcreteProductB2();
    ~CConcreteProductB2();
};

#endif // ABSTRACTPRODUCT_H
