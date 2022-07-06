#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

double num_first; //переменная для первого числа

MainWindow::MainWindow(QWidget *parent) :
    // Ещё до выполнения конструктора будет вызван
    // конструктор родительского класса
    // А поле ui будет инициализировано выражением new UI::MainWindow.
    // Оператор new выделяет память под объект в куче (как malloc), затем
    // вызывает конструктор для инициализации объекта.
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //указываем, какой слот будет выполнен при нажатии определенной кнопки
    connect(ui->pushButton_0,SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_1,SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_sign,SIGNAL(clicked()),this, SLOT(operations()));
    connect(ui->pushButton_persent,SIGNAL(clicked()),this, SLOT(operations()));
    connect(ui->pushButton_sum,SIGNAL(clicked()),this, SLOT(math_operations()));
    connect(ui->pushButton_dif,SIGNAL(clicked()),this, SLOT(math_operations()));
    connect(ui->pushButton_div,SIGNAL(clicked()),this, SLOT(math_operations()));
    connect(ui->pushButton_mul,SIGNAL(clicked()),this, SLOT(math_operations()));

    //указываем, что кнопки действий тригерные
    ui->pushButton_sum->setCheckable(true);
    ui->pushButton_dif->setCheckable(true);
	    ui->pushButton_mul->setCheckable(true);
    ui->pushButton_div->setCheckable(true);
    ui->pushButton_result->setCheckable(true);
}

MainWindow::~MainWindow()//деструктор
{
    delete ui;
}

void MainWindow::digits_numbers()
{
    QPushButton *button = (QPushButton *)sender(); // указатель на нажатую кнопку
    double all_numbers;
    QString new_label;
    //если число дробное
    if (ui->result_show->text().contains(".")&&button->text() == "0")
    {
        new_label = ui->result_show->text() + button->text();
    }
    else
    {
        all_numbers = (ui->result_show->text()+button->text()).toDouble();
        new_label = QString::number(all_numbers, 'g', 10);
    }
    if(new_label.size() < 10)// проверка на лимит
        ui->result_show->setText(new_label);// вывод на экран числа
    else
    QApplication::beep();
}

void MainWindow::on_pushButton_point_clicked()
{
    if(!(ui->result_show->text().contains('.'))){
        ui->result_show->setText(ui->result_show->text() + ".");}
    else
        QApplication::beep();
}

void MainWindow::operations()
{
    QPushButton *button = (QPushButton *)sender();
    double all_numbers;
    QString new_label;
    if(button->text() == "+/-")
    {
        all_numbers = (ui->result_show->text()).toDouble();
        all_numbers = all_numbers * -1;
        new_label = QString::number(all_numbers, 'g', 10);
        ui->result_show->setText(new_label);
    }
    else
        if(button->text() == "%")
        {
            all_numbers = (ui->result_show->text()).toDouble();
            all_numbers = all_numbers * 0.01;
            new_label = QString::number(all_numbers, 'g', 10);
            ui->result_show->setText(new_label);
        }


}

void MainWindow::math_operations()
{
    QPushButton *button = (QPushButton *)sender();

    QString number1;

    num_first = ui->result_show->text().toDouble();

    number1 = QString::number(num_first, 'g', 10);

    ui->label->setText(number1);

    if(ui->pushButton_sum->isChecked())
    {
        ui->label->setText(ui->label->text() + " + ");
    }
    else
        if(ui->pushButton_dif->isChecked())
        {
            ui->label->setText(ui->label->text() + " - ");
        }
        else
            if(ui->pushButton_div->isChecked())
            {
                ui->label->setText(ui->label->text() + " / ");
            }
            else
                if(ui->pushButton_mul->isChecked())
                {
                    ui->label->setText(ui->label->text() + " * ");
                }


    ui->result_show->setText("");
    button->setChecked(true);
}

void MainWindow::on_pushButton_clean_clicked()//при нажатии на AC
{
    ui->pushButton_sum->setChecked(false);
    ui->pushButton_dif->setChecked(false);
    ui->pushButton_div->setChecked(false);
    ui->pushButton_mul->setChecked(false);
    ui->result_show->setText("0");
    ui->label->setText(" ");
}

void MainWindow::on_pushButton_result_clicked()
{
    double labelNumber, num_second;
    QString new_label;
    num_second = ui->result_show->text().toDouble();

    QString number2;

    number2 = QString::number(num_second, 'g', 10);

    ui->label->setText(ui->label->text() + number2 + " = ");

    if(ui->pushButton_sum->isChecked())
    {
        labelNumber = num_first + num_second;
		        new_label = QString::number(labelNumber, 'g', 15);

        if(new_label.size() < 15)// проверка на лимит
                    ui->result_show->setText(new_label);
                else
                    ui->result_show->setText("Error! Limit exceeded!");

        ui->pushButton_sum->setChecked(false);
    }
    else
        if(ui->pushButton_dif->isChecked())
        {
            labelNumber = num_first - num_second;
            new_label = QString::number(labelNumber, 'g', 15);

            if(new_label.size() < 15)// проверка на лимит
                        ui->result_show->setText(new_label);
                    else
                        ui->result_show->setText("Error! Limit exceeded!");

            ui->pushButton_dif->setChecked(false);

        }
        else
            if(ui->pushButton_mul->isChecked())
            {
                labelNumber = num_first * num_second;
                new_label = QString::number(labelNumber, 'g', 15);

                if(new_label.size() < 15)// проверка на лимит
                            ui->result_show->setText(new_label);
                        else
                            ui->result_show->setText("Error! Limit exceeded!");

                ui->pushButton_mul->setChecked(false);

            }
            else
                if(ui->pushButton_div->isChecked())
                {
                    if (num_second == 0)
                    {
                        ui->result_show->setText("Error");
                    }
                    else
                    {
                        labelNumber = num_first / num_second;
                        new_label = QString::number(labelNumber, 'g', 15);

                        if(new_label.size() < 15)// проверка на лимит
                                    ui->result_show->setText(new_label);
                                else
                                    ui->result_show->setText("Error! Limit exceeded!");

                        ui->pushButton_div->setChecked(false);
                    }
                }

}
