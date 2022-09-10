//
// Created by matvey on 10.09.22.
//

#ifndef HELLOWORLD2_CTWO_H
#define HELLOWORLD2_CTWO_H


#include "COne.h"
#include <iostream>
using std::cout;

class CTwo{
public:
    CTwo()
    :d(0.0)
    ,p(new COne)
    {}

    CTwo(COne const * _p,double d)
    :d(d)
    ,p(new COne)
    {
        *this->p=*_p;
    }

    CTwo(CTwo const & cTwo)
    :d(cTwo.d)
    {
        *this->p=*cTwo.p;
    }

    CTwo & operator=(CTwo const & cTwo);

    double getD() const;

    void setD(double d);

    COne *getP() const;

    void setP(COne *p);

    virtual void print(){
        cout<<"Class CTwo:\n";
        cout<<"\td = "<<d<<'\n';
        p->print();
    }

    ~CTwo(){
        delete p;
    }
private:
    COne* p;
    double d;
};


#endif //HELLOWORLD2_CTWO_H
