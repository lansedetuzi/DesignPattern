#include "mainwindow.h"

#include "AbstractExpr.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testInterpreter();
}

MainWindow::~MainWindow()
{

}

void MainWindow::testInterpreter()
{
    QString str = "adfl34j5sdlf.sdf1kj45lkdf.kj4seo5ir134324";
    Context *pContext = new Context(str);

    AbstractExpr *pTerExpr = new TerminalExpr();
    pTerExpr->interprete(pContext);

    AbstractExpr *pNonTerExpr = new NonTerminaExpr();
    pNonTerExpr->interprete(pContext);

}
