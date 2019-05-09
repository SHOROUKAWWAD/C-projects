/*
 CH08-320143
 a1_p2.cpp
 SHOROUK GABR AWWAD
 s.awwad@jacobs-university.de
 */
#include<iostream>
using namespace std;

class A
{
    int x;
public:
    A(int i)
    {
        x = i;
    }
    void print()
    {
        cout << x;
    }
};

class B:  public A
{
public:
    B():A(10) {  }
};

class C:  public A
{
public:
    C():A(10) {  }
};

class D: public B, public C
{
public:
    D():B(),C() {}
};
/*
when the virtual inheritance was used,
one of the direct connections to class A was lost.
and while D class was inheriting from two classes
the definition of class A,the definition wasn't defined.
to overcome this problem , the virtual inherited must be
converted into non-virtual one.
But here arises the problem of the print
function with multiple definitions which can be solved easily
by referring to the  classes B and C.
 */
int main()
{
    D d;
    cout <<"print::B\n";
    d.B::print();
    cout <<"\nprint::C\n";
    d.C::print();
    return 0;
}
