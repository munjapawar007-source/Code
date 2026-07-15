
/*
    what is the size of C?
*/


#include<iostream>
using namespace std;


class A
{
    public:
    int *p1;
    virtual void f1()
    {}
};

class B
{
    public:
    int* p2;
    virtual void f2(){}
};

class C : public A, public B
{

    public:
    int* p3;
    virtual void f3(){}
};

int main()
{

    cout << sizeof(C);

    return 0;
}