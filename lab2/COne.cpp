#include "COne.h"

long COne::getL() const {
    return l;
}

void COne::setL(long l) {
    COne::l = l;
}

string COne::getS() const {
    return s;
}

void COne::setS(const string & s) {
    COne::s = s;
}

void COne::print() const {
    cout<<"l = "<<l<<'\n';
    cout<<"s = "<<s<<'\n';
}
