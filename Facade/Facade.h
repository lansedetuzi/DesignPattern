#ifndef FACADE_H
#define FACADE_H

class SubSys1
{
public:
    SubSys1();
    ~SubSys1(){}

    void operation();
};

class SubSys2
{
public:
    SubSys2();
    ~SubSys2(){}

    void operation();
};

class Facade
{
public:
    Facade();
    ~Facade(){}

    void operation();

private:
    SubSys1 *m_sys1;
    SubSys2 *m_sys2;
};

#endif // FACADE_H
