#include "mainwindow.h"

#include "Iterator.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testIterator();
}

MainWindow::~MainWindow()
{

}

void MainWindow::testIterator()
{
    Aggregate *pAggre = new ConcreteAggregate();
    for (int i = 0; i < 5; ++i)
    {
        pAggre->append(new QObject());
    }

    Iterator *it = pAggre->createIterator();
    qDebug() << "first: " << it->First();

    while (it->IsDone())
    {
        qDebug() << it->CurrentItem();
        it->Next();
    }
}
