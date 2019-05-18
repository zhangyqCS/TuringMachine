#ifndef TURINGMACHINE_H
#define TURINGMACHINE_H

#include <QMainWindow>
#include <QDebug>
#include<QFile>
#include <QInputDialog>
#include <QString>
#include <QMessageBox>
#include <QVector>
#include <QTextStream>
#include <vector>
#include <iostream>
#include <QMessageBox>
#include <string>
#include <cctype>
#include<windows.h>

using namespace std;

namespace Ui {
class TuringMachine;
}

class TuringMachine : public QMainWindow
{
    Q_OBJECT

public:
    explicit TuringMachine(QWidget *parent = 0);
    ~TuringMachine();

    void init();
    void print();
    void ReadFromFile();

private slots:
    void on_pushBtn_clicked();

    void on_DisBtn_clicked();

    //void on_TransEdit_textChanged(const QString &arg1);

private:
    Ui::TuringMachine *ui;
    vector<string> transfucs;
    QString Display;
    QString input;
    int cnt=0;
    int cpos;
    QChar Sta0;
    QChar Sta1;
    QChar Curstate;
};

#endif // TURINGMACHINE_H
