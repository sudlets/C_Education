#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Plus_clicked()
{
    QString s;
    double x1, x2, x3;
    x1=ui->lineEdit->text().toDouble();
    x2=ui->lineEdit_2->text().toDouble();
    x3=x1+x2;
    s.sprintf("%10.5f", x3);
    ui->lineEdit_3->setText(s);
}

void MainWindow::on_pushButton_Minus_clicked()
{
    QString s;
    double x1, x2, x3;
    x1=ui->lineEdit->text().toDouble();
    x2=ui->lineEdit_2->text().toDouble();
    x3=x1-x2;
    s.sprintf("%10.5f", x3);
    ui->lineEdit_3->setText(s);
}

void MainWindow::on_pushButton_Div_clicked()
{
    QString s;
    double x1, x2, x3;
    x1=ui->lineEdit->text().toDouble();
    x2=ui->lineEdit_2->text().toDouble();
    if (x2 == 0)
        s = "division on zero";
    else
    {
    x3=x1/x2;
    s.sprintf("%10.5f", x3);
    }
    ui->lineEdit_3->setText(s);
}

void MainWindow::on_pushButton_Mul_clicked()
{
    QString s;
    double x1, x2, x3;
    x1=ui->lineEdit->text().toDouble();
    x2=ui->lineEdit_2->text().toDouble();
    x3=x1*x2;
    s.sprintf("%10.5f", x3);
    ui->lineEdit_3->setText(s);
}
