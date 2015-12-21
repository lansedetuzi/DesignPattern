#ifndef ABSTRACTCLASS_H
#define ABSTRACTCLASS_H

class AbstractClass
{
public:
    AbstractClass();
    ~AbstractClass(){}

    void templateMethod();

protected:
    virtual void primitiveA() = 0;
    virtual void primitiveB() = 0;
};

class ConcreteClass1 : public AbstractClass
{
public:
    ConcreteClass1();
    ~ConcreteClass1(){}

protected:
    void primitiveA();
    void primitiveB();
};

class ConcreteClass2 : public AbstractClass
{
public:
    ConcreteClass2();
    ~ConcreteClass2(){}

protected:
    void primitiveA();
    void primitiveB();
};

#endif // ABSTRACTCLASS_H
