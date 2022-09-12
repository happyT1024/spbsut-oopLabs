#include "Widget.h"

void Widget::init(double & a, double & b){
    a=line1->text().toDouble();
    b=line2->text().toDouble();
}

void Widget::plus(){
    double a,b;
    init(a,b);
    line3->setText(QString("").setNum(a+b));
}

void Widget::minus(){
    double a,b;
    init(a,b);
    line3->setText(QString("").setNum(a-b));
}

void Widget::mul(){
    double a,b;
    init(a,b);
    line3->setText(QString("").setNum(a*b));
}

void Widget::del(){
    double a,b;
    init(a,b);
    if(b!=0) {
        line3->setText(QString("").setNum(a / b));
    }else{
        line3->setText(QString("Infinity"));
    }
}

Widget::Widget()
{
    setWindowTitle("Hello world!!!");
    int x = 800, y = 400;
    int bSize = 100;
    setMinimumSize(x, y);

    line1 = new QLineEdit("0",this);
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
    connect(button4, SIGNAL(clicked()), this, SLOT(del()));
}

Widget::~Widget()
{
    delete line1;
    delete line2;
    delete line3;
}
