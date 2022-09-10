#include <bits/stdc++.h>
#include "COne.h"
#include "CTwo.h"
#include "CThree.h"
#include "CFour.h"
using namespace std;

void printAll(vector<CTwo*> const &array){
    for(auto x:array){
        x->print();
    }
}

int main() {
    vector<CTwo*>array{
        new CTwo(),
        new CThree(),
        new CFour(),
        new CFour(true, 666, new COne(-98,"ARAB"), 3.14)
    };
    printAll(array);
    return 0;
}
