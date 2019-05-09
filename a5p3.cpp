/*
CH08-320143a5p1.cpp
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de
*/
#include <iostream>
using namespace std;
// class throws a message
class Motor{
public:
    Motor() {throw("This motor has problems");}
};

class Car{
public:
//call of motor constructor inside car constructor
Car(){Motor();}
};

class Garage{
public:
    Garage()
    {
        try
        {//try car||call of constructor car
            Car();
        }//catch message
        catch (const char *message)
        {//print message to cerr
            cerr << message << endl;
        }
        throw("The car in this garage has problems with the motor");
    }
};

int main()
{
    try
    {
        Garage g;
    }
    catch (const char *message)
    {
        cerr << message << endl;
    }
    return 0;
}
