#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dialog = new Dialog(this);
    dialog->setModal(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_open_clicked()
{
    dialog->show( );
}

