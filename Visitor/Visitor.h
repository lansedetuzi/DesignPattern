#ifndef VISITOR_H
#define VISITOR_H

class Element;
class Visitor
{
public:
    Visitor();
    virtual ~Visitor(){}

    virtual void visitConcreteElementA(Element *element) = 0;
    virtual void visitConcreteElementB(Element *element) = 0;
};

class ConcreteVisitorA : public Visitor
{
public:
    ConcreteVisitorA();
    virtual ~ConcreteVisitorA(){}

    virtual void visitConcreteElementA(Element *element);
    virtual void visitConcreteElementB(Element *element);
};

class ConcreteVisitorB : public Visitor
{
public:
    ConcreteVisitorB();
    virtual ~ConcreteVisitorB(){}

    virtual void visitConcreteElementA(Element *element);
    virtual void visitConcreteElementB(Element *element);
};

class Element
{
public:
    Element();
    ~Element(){}

    virtual void Accept(Visitor* visitor) = 0;
};

class ConcreteElementA : public Element
{
public:
    ConcreteElementA();
    ~ConcreteElementA(){}

    void Accept(Visitor* visitor);
};

class ConcreteElementB : public Element
{
public:
    ConcreteElementB();
    ~ConcreteElementB(){}

    void Accept(Visitor* visitor);
};

#endif // VISITOR_H
