#ifndef ABSTRACTEXPR_H
#define ABSTRACTEXPR_H

#include <QString>

class Context
{
public:
    Context();
    Context(QString &str);
    ~Context(){}

    QString text() const;

private:
    QString m_str;
};

class AbstractExpr
{
public:
    AbstractExpr();
    ~AbstractExpr(){}

    virtual void interprete(const Context *context) = 0;
};

class TerminalExpr : public AbstractExpr
{
public:
    TerminalExpr();
    ~TerminalExpr(){}

    void interprete(const Context *context);

};

class NonTerminaExpr : public AbstractExpr
{
public:
    NonTerminaExpr();
    ~NonTerminaExpr(){}

    void interprete(const Context *context);

};

#endif // ABSTRACTEXPR_H
