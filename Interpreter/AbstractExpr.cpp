#include "AbstractExpr.h"

#include <QDebug>

Context::Context()
    : m_str("")
{

}

Context::Context(QString &str)
    : m_str(str)
{

}

QString Context::text() const
{
    return m_str;
}

AbstractExpr::AbstractExpr()
{

}


TerminalExpr::TerminalExpr()
    : AbstractExpr()
{

}

void TerminalExpr::interprete(const Context *context)
{
    QString text = context->text();

    for (int i = 0; i < text.length(); ++i)
    {
        if (text.at(i) == '.')
        {
            qDebug() << "Terminal pos: " << i;
            continue;
        }
    }
}

NonTerminaExpr::NonTerminaExpr()
    : AbstractExpr()
{

}

void NonTerminaExpr::interprete(const Context *context)
{
    QString text = context->text();
    QString letter = "";
    for (int i =0; i < text.length(); ++i)
    {
        if (text.at(i).isLetter())
        {
            letter.append(text.at(i));
        }
    }
    qDebug() << letter;
}
