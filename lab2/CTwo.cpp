#include "CTwo.h"
CTwo & CTwo::operator=(CTwo const & cTwo){
    CTwo a(cTwo);
    this->p = a.p;
    this->d = a.d;
}

double CTwo::getD() const {
    return d;
}

void CTwo::setD(double d) {
    CTwo::d = d;
}

COne *CTwo::getP() const {
    return p;
}

void CTwo::setP(COne *p) {
    CTwo::p = p;
}

void CTwo::print() const{
    cout<<"d = "<<d<<'\n';
    cout<<"p:\n";
    p->print();
}

