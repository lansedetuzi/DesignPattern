#include "mainwindow.h"

#include "Mediator.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testMediator();
}

MainWindow::~MainWindow()
{

}

void MainWindow::testMediator()
{
    ConcreteMediator *pMediator = new ConcreteMediator();

    ConcreteCollegeA *pCollegeA = new ConcreteCollegeA(pMediator);
    ConcreteCollegeB *pCollegeB = new ConcreteCollegeB(pMediator);

    pMediator->initCollege(pCollegeA, pCollegeB);
    pCollegeA->setState("old");
    pCollegeB->doAction();
    qDebug() << "A state:" << pCollegeA->state() << ", B State:" << pCollegeB->state();

    pCollegeB->setState("new");
    pCollegeA->doAction();
    qDebug() << "A state:" << pCollegeA->state() << ", B State:" << pCollegeB->state();
}
