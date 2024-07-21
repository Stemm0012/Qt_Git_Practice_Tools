#include "mainwindow.h"
#include "ui_mainwindow.h"

bool button4 = true;

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

    if(button4)
    {
        ui->label_3->show();
        button4 = false;
    }
    else
    {
        ui->label_3->hide();
        button4 = true;
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->label_4->setText(": )");
}
