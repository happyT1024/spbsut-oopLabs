//
// Created by matvey on 10.09.22.
//
#include "CTwo.h"
#ifndef HELLOWORLD2_CTHREE_H
#define HELLOWORLD2_CTHREE_H


class CThree : public CTwo{
public:
    CThree()
    :CTwo()
    ,_num(0)
    {}

    CThree(int num, COne* p, double d)
    :CTwo(p,d)
    ,_num(num)
    {}

    CThree(CThree const & cThree)
    :CTwo(cThree)
    ,_num(cThree._num)
    {}

    virtual void print(){
        cout<<"Class CThree:\n";
        cout<<"\tnum = "<<_num<<'\n';
        CTwo::print();
    }

    int getNum() const;

    void setNum(int num) ;

    ~CThree()= default;

private:
    int _num;
};


#endif //HELLOWORLD2_CTHREE_H
