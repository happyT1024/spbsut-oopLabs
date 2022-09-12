#include <QApplication>
#include <QPushButton>
#include <QLineEdit>
#include <QMainWindow>
#include <QWidget>

#ifndef LAB6_WIDGET_H
#define LAB6_WIDGET_H


#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class Widget : public QMainWindow{
Q_OBJECT
public:
    Widget();
    ~Widget();
private slots:
    void plus();
    void minus();
    void mul();
    void del();
private:
    QLineEdit * line1;
    QLineEdit * line2;
    QLineEdit * line3;
    void init(double & a, double & b);
};


#endif //LAB6_WIDGET_H
