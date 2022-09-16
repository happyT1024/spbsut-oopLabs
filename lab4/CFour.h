#include "CThree.h"

class CFour : public CThree{
public:
    CFour()
    :CThree()
    ,f(false)
    {}

    CFour(bool f, int num, COne* p, double d)
    : CThree(num,p,d)
    ,f(f)
    {}

    CFour(CFour const & cFour)
    :CThree(cFour)
    ,f(cFour.f)
    {}

    bool getF() const {
        return f;
    }

    void setF(bool f) {
        CFour::f = f;
    }

    virtual void print(){
        cout<<"Class CFour\n";
        cout<<"\tf = "<<f<<'\n';
        CThree::print();
    }

    ~CFour(){}

private:
    bool f;
};

