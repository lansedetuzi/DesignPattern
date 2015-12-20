#include "Composition.h"

#include <QDebug>

Component::Component()
{

}

Component::~Component()
{

}

void Component::add(const Component *)
{

}

void Component::remove(const Component *)
{

}

Component *Component::child(const int &)
{
    return nullptr;
}

Composition::Composition()
{

}

void Composition::operation()
{
    vector<Component*>::iterator it = comVec.begin();
    while (it != comVec.end())
    {
        (*it)->operation();
        ++it;
    }
}

void Composition::add(Component *component)
{
    comVec.push_back(component);
}

void Composition::remove(const int &index)
{
    comVec.erase(comVec.begin() + index);
}

Component *Composition::child(const int &index)
{
    return comVec[index];
}


Leaf::Leaf()
{

}

void Leaf::operation()
{
    qDebug() << "Leaf::operation";
}
