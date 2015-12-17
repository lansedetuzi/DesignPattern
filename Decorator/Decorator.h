#ifndef DECORATOR_H
#define DECORATOR_H
class Component
{
public:
    Component();
    virtual ~Component(){}

    virtual void operation() = 0;
};

class ConcreteComponent : public Component
{
public:
    ConcreteComponent();
    ~ConcreteComponent(){}

    void operation();
};

class Decorator : public Component
{
public:
    Decorator(Component *component);
    virtual ~Decorator(){}

    void operation();

    Component *m_component;
};

class ConcreateDecorator : public Decorator
{
public:
    ConcreateDecorator(Component *Component);
    ~ConcreateDecorator(){}

    void operation();
    void addOperation();
};
#endif // DECORATOR_H
