#include "mainwindow.h"
#include "ui_mainwindow.h"

int test = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_2->hide();
    ui->label_3->hide();


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_4_clicked()
{

    if(test == 0)
    {
        ui->label_3->show();
        test = 1;
    }
    else
    {
        ui->label_3->hide();
        test = 0;
    }
}
