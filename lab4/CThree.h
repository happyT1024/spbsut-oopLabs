#include "CTwo.h"


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
