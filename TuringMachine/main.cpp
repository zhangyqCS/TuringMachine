#include "turingmachine.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //TuringMachine.init();
    TuringMachine w;
    w.ReadFromFile();
    w.show();
    return a.exec();
}
