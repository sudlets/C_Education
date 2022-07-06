#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

// установление класса в пространстве имени Ui
namespace Ui {
class MainWindow; // класс главного окна
}
//определение класса MainWindow - наследника QMainWindow.
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr); // конструктор
    ~MainWindow(); // деструктор

private:
    Ui::MainWindow *ui; // указатель на объект-построитель интерфейса

private slots:
    void digits_numbers(); // метод ввода числа
    void on_pushButton_point_clicked(); // метод ввода дробной части
    void operations(); // метод операций
    void on_pushButton_clean_clicked(); // метод очистки поля ввода (кнопка AC)
    void math_operations(); // метод задания математической операции
    void on_pushButton_result_clicked(); // метод для вывода результата (кнопка =)
};

#endif // MAINWINDOW_H
