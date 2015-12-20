#include "mainwindow.h"

#include "Composition.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testComposition();
}

MainWindow::~MainWindow()
{

}

void MainWindow::testComposition()
{
    Leaf *pLeaf = new Leaf();
    pLeaf->operation();

    Composition *pComposion = new Composition();
    pComposion->add(pLeaf);
    pComposion->operation();

    Component *pCom2 = pComposion->child(0);
    pCom2->operation();
}
