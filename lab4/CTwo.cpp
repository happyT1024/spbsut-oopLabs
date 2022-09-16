#include "CTwo.h"
#include "CTwo.h"
CTwo & CTwo::operator=(CTwo const & cTwo){
    CTwo a(cTwo);
    this->p = a.p;
    this->d = a.d;
    return *this;
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

