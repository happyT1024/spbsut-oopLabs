#include "CThree.h"
void CThree::print(){
    cout<<"num = "<<_num<<'\n';
    cout<<"CTwo:\n";
    CTwo & cTwo = *this;
    cTwo.print();
}

int CThree::getNum() const {
    return _num;
}

void CThree::setNum(int num) {
    _num = num;
}
