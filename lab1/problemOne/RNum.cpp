#include <bits/stdc++.h>
using namespace std;

class RNum{
public:
    RNum(int p=0, int q=1)
    :P(p)
    ,Q(q)
    {
        init();
    }

    RNum(RNum const & num)
    :P(num.P)
    ,Q(num.Q)
    {}

    bool equal(RNum const & num){
        return P==num.P && Q==num.Q;
    }

    bool noEqual(RNum const & num){
        return !this->equal(num);
    }

    bool less(RNum const & num){
        return this->get() < num.get();
    }

    bool bigger(RNum const & num){
        return !this->less(num) && this->noEqual(num);
    }

    void add(RNum const & num){
        int p1=P*num.Q, q1=Q*num.Q;
        int p2=num.P*Q;
        P=p1+p2;
        Q=q1;
        init();
    }

    void sub(RNum const & num){
        RNum newNum(num);
        newNum.multiplication(RNum(-1,1));
        this->add(newNum);
    }

    void multiplication(RNum const & num){
        this->P*=num.P;
        this->Q*=num.Q;
        init();
    }

    void division(RNum const & num){
        this->P*=num.Q;
        this->Q*=num.P;
        init();
    }

    void out() const {
        cout<<P<<"/"<<Q<<" = "<<double(P)/Q<<'\n';
    }

private:
    int P, Q;
    void init(){
        int g = gcd(abs(P),abs(Q));
        P/=g;
        Q/=g;
    }

    int gcd (int a, int b) {
        return b ? gcd (b, a % b) : a;
    }

    double get()const{
        return double(P)/Q;
    }

};
