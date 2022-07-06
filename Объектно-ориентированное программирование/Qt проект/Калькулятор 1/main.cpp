#include "mainwindow.h" // заголовочный файл с классом MainWindow
#include <QApplication> // класс QApplication библиотеки Qt,
                        // управляющего всеми окнами и виджитами

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);    
    MainWindow w; // создание виджета
    w.setFixedSize(256,409); 
    w.show(); // показ виджета
    return a.exec(); // программа работает пока не будет завершена
}
