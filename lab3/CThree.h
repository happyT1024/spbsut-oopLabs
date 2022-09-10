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
    :CTwo(CTwo(cThree))
    ,_num(cThree._num)
    {}

    void print();

    int getNum() const;

    void setNum(int num) ;

    ~CThree()= default;

private:
    int _num;
};
