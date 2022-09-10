//
// Created by matvey on 10.09.22.
//

#ifndef HELLOWORLD2_CONE_H
#define HELLOWORLD2_CONE_H


#include <string>
#include <iostream>
using std::string;
using std::cout;

class COne{
public:
    COne()
            :l(0)
    {}

    COne(long l, string  s)
            :l(l)
            ,s(std::move(s))
    {}

    COne(COne const & cOne) = default;

    long getL() const;

    void setL(long l);

    string getS() const;

    void setS(const string & s);

    void print() const;

    COne & operator=(COne const & cOne)= default;

    ~COne() = default;

private:
    long l;
    string s;
};


#endif //HELLOWORLD2_CONE_H
