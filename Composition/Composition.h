#ifndef COMPOSITION_H
#define COMPOSITION_H

#include <vector>
using namespace std;

class Component
{
public:
    Component();
    virtual ~Component();

    virtual void operation() = 0;
    virtual void add(const Component *);
    virtual void remove(const Component *);
    virtual Component* child(const int &);

};

class Composition : public Component
{
public:
    Composition();
    ~Composition(){}

    void operation();
    void add(Component *component);
    void remove(const int &index);
    Component* child(const int &index);

private:
    vector<Component*> comVec;
};

class Leaf : public Component
{
public:
    Leaf();
    ~Leaf(){}

    void operation();
};

#endif // COMPOSITION_H
