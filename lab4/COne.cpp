//
// Created by matvey on 10.09.22.
//

#include "COne.h"

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
    cout<<"Class COne:\n";
    cout<<"\tl = "<<l<<'\n';
    cout<<"\ts = "<<s<<'\n';
    cout<<"----------------\n";
}

