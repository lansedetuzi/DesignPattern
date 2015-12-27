#ifndef MEMENTO_H
#define MEMENTO_H

#include <QString>

class Memento;
class Originator
{
public:
    Originator();
    Originator(QString state);
    ~Originator(){}

    Memento* createMemento();
    void setMemento(Memento *memento);
    void restoreMemento(const Memento *memento);

    void setState(const QString &state);
    QString state() const;
    void printStateInfo();

private:
    QString m_state;
    Memento *m_memento;
};

class Memento
{
private:
    Memento();
    Memento(QString state);
    ~Memento(){}

    void setState(const QString &state);
    QString state() const;

private:
    QString m_state;
    friend class Originator;
};

#endif // MEMENTO_H
