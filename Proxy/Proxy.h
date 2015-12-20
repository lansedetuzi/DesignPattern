#ifndef PROXY_H
#define PROXY_H
class Subject
{
public:
    Subject();
    ~Subject(){}

    virtual void request() = 0;
};

class ConcreteSubject : public Subject
{
public:
    ConcreteSubject();
    ~ConcreteSubject(){}

    void request();
};

class Proxy
{
public:
    Proxy(Subject *subject);
    ~Proxy();

    void request();

private:
    Subject *m_subject;
};

#endif // PROXY_H
