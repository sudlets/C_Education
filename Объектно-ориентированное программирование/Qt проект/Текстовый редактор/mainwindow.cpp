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

void MainWindow::on_clearAll_clicked()
{
    ui->lineEdit_lo->setText("");
    ui->lineEdit_up->setText("");
}

void MainWindow::on_clear_up_clicked()
{
    ui->lineEdit_up->setText("");
}

void MainWindow::on_clear_lo_clicked()
{
    ui->lineEdit_lo->setText("");
}

void MainWindow::on_copy_clicked()
{
    QString s = ui->lineEdit_up->text();
    ui->lineEdit_lo->setText(s);
}

void MainWindow::on_concat_clicked()
{
    QString s;
    s = ui->lineEdit_lo->text() + ui->lineEdit_up->text();
    ui->lineEdit_lo->setText(s);
}

void MainWindow::on_move_clicked()
{
    QString s = ui->lineEdit_up->text();
    ui->lineEdit_lo->setText(s);
    ui->lineEdit_up->setText("");
}
