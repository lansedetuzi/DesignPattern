#include "mainwindow.h"

#include "Memento.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testMemento();
}

MainWindow::~MainWindow()
{

}

void MainWindow::testMemento()
{
    Originator *pOri = new Originator("old state");
    qDebug() << "initState:";
    pOri->printStateInfo();


    Memento *pBackupMemento = pOri->createMemento();

    pOri->setState("new state");
    qDebug() << "changed:";
    pOri->printStateInfo();

    pOri->restoreMemento(pBackupMemento);
    qDebug() << "backup:";
    pOri->printStateInfo();

}
