//
// Created by matvey on 12.09.22.
//
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QMainWindow>

#ifndef LAB6_2_WIDGET_H
#define LAB6_2_WIDGET_H


class Widget : public QMainWindow{
    Q_OBJECT
public:
    Widget();
    ~Widget();
private slots:
    void clearLeft();
    void clearRight();
    void clearAll();
    void swap();
    void copyLeft();
    void copyRight();
private:
    QLineEdit * line1;
    QLineEdit * line2;

    QPushButton * buttonClearLeft;
    QPushButton * buttonClearRight;
    QPushButton * buttonClearAll;
    QPushButton * buttonSwap;
    QPushButton * buttonCopyLeft;
    QPushButton * buttonCopyRight;

    void init(QString & a, QString & b);
};


#endif //LAB6_2_WIDGET_H
