//
// Created by matvey on 12.09.22.
//

#include "Widget.h"

void Widget::init(QString & a, QString & b){
    a=line1->text();
    b=line2->text();
}

void Widget::clearLeft(){
    line1->setText(QString(""));
}

void Widget::clearRight(){
    line2->setText(QString(""));
}

void Widget::clearAll(){
    clearLeft();
    clearRight();
}

void Widget::swap(){
    QString a,b;
    init(a,b);
    line1->setText(b);
    line2->setText(a);
}

void Widget::copyLeft(){
    QString a,b;
    init(a,b);
    line1->setText(b);
}

void Widget::copyRight(){
    QString a,b;
    init(a,b);
    line2->setText(a);
}

Widget::Widget()
{
    setWindowTitle("Hello world!!!");
    int x = 800, y = 400;
    int bSize = 100;
    setMinimumSize(x, y);

    line1 = new QLineEdit("Line one",this);
    line1->setGeometry(0, 0, x/2, 60);
    line2 = new QLineEdit("Line two",this);
    line2->setGeometry(x/2, 0, x/2, 60);

    buttonClearLeft = new QPushButton("Clear Left",this);
    buttonClearRight = new QPushButton("Clear Right",this);
    buttonClearAll = new QPushButton("Clear All",this);

    buttonSwap = new QPushButton("Swap",this);
    buttonCopyLeft = new QPushButton("Copy Left",this);
    buttonCopyRight = new QPushButton("Copy Right",this);

    buttonClearLeft->setGeometry(300,100,100,50);
    buttonClearRight->setGeometry(300, 150,100,50);
    buttonClearAll->setGeometry(300, 200,100,50);

    buttonSwap->setGeometry(400, 100, 100,50);
    buttonCopyLeft->setGeometry(400, 150,100,50);
    buttonCopyRight->setGeometry(400, 200,100,50);

    connect(buttonClearLeft, SIGNAL(clicked()), this, SLOT(clearLeft()));
    connect(buttonClearRight, SIGNAL(clicked()), this, SLOT(clearRight()));
    connect(buttonClearAll, SIGNAL(clicked()), this, SLOT(clearAll()));

    connect(buttonSwap, SIGNAL(clicked()), this, SLOT(swap()));
    connect(buttonCopyLeft, SIGNAL(clicked()), this, SLOT(copyLeft()));
    connect(buttonCopyRight, SIGNAL(clicked()), this, SLOT(copyRight()));


    /*line1 = new QLineEdit("0",this);
    line1->setGeometry(0, 0, x/3, 30);
    line2 = new QLineEdit("0",this);
    line2->setGeometry(x/3, 0, x/3, 30);
    line3 = new QLineEdit("0",this);
    line3->setGeometry(2*x/3, 0, x/3, 30);
    line3->setReadOnly(true);

    QPushButton * button1 = new QPushButton("+",this);
    QPushButton * button2 = new QPushButton("-",this);
    QPushButton * button3 = new QPushButton("*",this);
    QPushButton * button4 = new QPushButton("/",this);

    button1->setGeometry(300,100,bSize,bSize);
    button2->setGeometry(300 + bSize,100,bSize,bSize);
    button3->setGeometry(300,100 + bSize,bSize,bSize);
    button4->setGeometry(300 + bSize,100 + bSize,bSize,bSize);

    connect(button1, SIGNAL(clicked()), this, SLOT(plus()));
    connect(button2, SIGNAL(clicked()), this, SLOT(minus()));
    connect(button3, SIGNAL(clicked()), this, SLOT(mul()));
    connect(button4, SIGNAL(clicked()), this, SLOT(del()));*/


    /*QLabel * plb = new QLabel(tr("Test"), this);
    plb->setGeometry(20, 20, 80, 24);

    QLineEdit * ple = new QLineEdit(this);
    ple->setGeometry(110, 20, 80, 24);

    QPushButton * ppb = new QPushButton(tr("Ok"), this);
    ppb->setGeometry(20, 50, 80, 24);*/



}

Widget::~Widget() {

}

