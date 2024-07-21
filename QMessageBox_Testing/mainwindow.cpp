#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::about(this, "About", "About your Button");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::aboutQt(this, "AboutQt");
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::critical(this, "Critical", "Error");
}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::information(this, "Information", "Helpful Tip #1: Close the Box");
}

void MainWindow::on_pushButton_5_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Question", "Do you want to exit the app?", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
    else
    {
        qDebug() << "No is Clicked.";
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    QMessageBox::warning(this, "Warning!", "Don't click again!");
}
