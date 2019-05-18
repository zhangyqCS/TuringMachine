#include "turingmachine.h"
#include "ui_turingmachine.h"


using namespace std;

TuringMachine::TuringMachine(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TuringMachine)
{
    ui->setupUi(this);
}

TuringMachine::~TuringMachine()
{
    delete ui;
}

/*****************************/


void TuringMachine::ReadFromFile()
{
    QFont font( "Timers", 14, 50);
    ui->label->setFont(font);
    ui->label_2->setFont(font);
    ui->label_3->setFont(font);
    ui->label_4->setFont(font);
    ui->label_6->setFont(font);
    ui->label_7->setFont(font);


    //QFile file("input.txt");
    QFile file("input2.txt");

    if(!file.open(QIODevice::ReadWrite |QIODevice::Text))
        qDebug() << file.errorString();
    QTextStream in(&file);

    while(1)
    {
        QString str=in.readLine();
        if(str.size()==0)break;
        string tmp;
        tmp=str.toStdString();
        transfucs.push_back(tmp);
    }

    file.close();

    return;
}


void TuringMachine::init()
{
    string str0=ui->StaEdit_0->text().toStdString();
    string str1=ui->StaEdit_1->text().toStdString();
    string str=ui->InputEdit->text().toStdString();
    Sta0=QChar(str0[0]);
    Sta1=QChar(str1[0]);
    input[0]='B';
    Curstate=Sta0;

    for(int i=0;i<str.size();i++){QString tmp(str[i]);input+=tmp;}
    input+="B\n";
    cpos=1;

    return;
}

void TuringMachine::print()
{
    QString res;
    QString str;
    //QString tmp1(cpos);

    QString tmp1 = QString::number(cpos, 10);
    str+="Current pos: " + tmp1 +"\n";
    for(int i=0;i<input.size();i++)
    {
        QString tmp(input[i]);

        res+=tmp;
    }

    ui->OutputEdit->clear();
    //ui->OutputEdit.setFont(QFont( "Timers" , 28 ,  QFont::Bold) );
    ui->OutputEdit->setFont(QFont(tr("Consolas"), 16));
    ui->OutputEdit->setPlainText(str+res);
    return;
}

void TuringMachine::on_DisBtn_clicked()
{
    //cout<<transfucs.size()<<endl;
    for(int i = 0; i < transfucs.size(); i++)
    {
        string tmpstr=transfucs[i];

        QString str0(tmpstr[0]);
        QString str2(tmpstr[2]);
        QString str4(tmpstr[4]);
        QString str6(tmpstr[6]);

        if(tmpstr[8]=='0')
        {
            Display += "δ(q" + str0 + "," + str2 + ")=(q" + str4 + "," +  str6 + ",S)" + '\n' ;
        }
        else if(tmpstr[8]=='1')
        {
            Display += "δ(q" + str0 + "," + str2 + ")=(q" + str4 + "," +  str6 + ",L)" + '\n' ;
        }
        else if(tmpstr[8]=='2')
        {
            Display += "δ(q" + str0 + "," + str2 + ")=(q" + str4 + "," +  str6 + ",R)" + '\n' ;
        }

    }
    //ui->OutEdit->clear();
    ui->OutEdit->setPlainText(Display);

    return;

}

void TuringMachine::on_pushBtn_clicked()
{
    int flag=0;

    if(cnt==0)init();
    print();
    for(int i=0;i<transfucs.size();i++)
    {
        string tmp=transfucs[i];
        if(Curstate==tmp[0] && input[cpos]==tmp[2])
        {
            flag=1;
            Curstate=tmp[4];
            input[cpos]=tmp[6];
            if(tmp[8]=='1')cpos-=1;
            if(tmp[8]=='2')cpos+=1;
        }
    }

    if(cpos<0 || cpos>input.size() ||(flag==0 && Curstate!=Sta1))
    {
        QMessageBox::information(this, tr("Sorry!"), tr("String not accepted!"),QMessageBox::Ok);
    }

    if(flag==0 && Curstate==Sta1)
    {
        QMessageBox::information(this, tr("Congratulations!"), tr("String accepted!"),QMessageBox::Ok);
    }
    cnt++;

}

/*
void TuringMachine::on_TransEdit_textChanged(const QString &arg1)
{
    string AddStr = ui->TransEdit->text().toStdString();

    QString Display1;

    if(AddStr.size()<9)
    {
        ui->OutEdit->clear();
        ui->OutEdit->setPlainText(Display);
        return;
    }

    transfucs.push_back(AddStr);
    for(int i = 0; i < transfucs.size(); ++i)
    {
        string tmpstr=transfucs[i];

        QString str0(tmpstr[0]);
        QString str2(tmpstr[2]);
        QString str4(tmpstr[4]);
        QString str6(tmpstr[6]);

        if(tmpstr[8]=='0')
        {
            Display1 += "δ(q" + str0 + "," + str2 + ")=(q" + str4 + "," +  str6 + ",S)" + '\n' ;
        }
        else if(tmpstr[8]=='1')
        {
            Display1 += "δ(q" + str0 + "," + str2 + ")=(q" + str4 + "," +  str6 + ",L)" + '\n' ;
        }
        else if(tmpstr[8]=='2')
        {
            Display1 += "δ(q" + str0 + "," + str2 + ")=(q" + str4 + "," +  str6 + ",R)" + '\n' ;
        }

    }
    ui->OutEdit->clear();
    Display+=Display1;
    ui->OutEdit->setPlainText(Display);

    return;

}

*/

