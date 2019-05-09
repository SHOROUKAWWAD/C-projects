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
    void setX(int i)
    {
        x = i;
    }
    void print()
    {
        cout << x;
    }
};

class B:/*virtual*/  public A
{
public:
    B()
    {
        setX(10);
    }
};

class C: /*virtual*/ public A
{
public:
    C()
    {
        setX(20);
    }
};

class D: public B, public C
{
};
/*in this example, the compiler was confused
because it inherits multiple definitions
and initiations of print() function,
 so the compiler was confused which to call.
 Here exists two solutions, the first one is to
 tell the program which one to call and when,
  by putting a reference to both class A and B.
  The other one is by using virtual inheritance, but
   at this moment the compiler will compile only
   the definition from the last inherited class, in this case C.

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
