/*
CH08-320143
a4p4.cpp
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de
*/
#include <iostream>
#include <cmath>
#include <set>
// access class
using namespace std;
class Access
{
public:
    void activate (unsigned int code)
    {

        codes.insert(code);
    }
    void deactivate (unsigned int code)
    {
        codes.erase (code);
    }
    bool isactive (unsigned int code)
    {
        const bool exists = codes.find(code) != codes.end();
        return exists;
    }

private:
    set<int> codes;
};

int main()
{
// object
    Access obj;
    int code;
//first activation
    obj.activate (1234);
    obj.activate (9999);
    obj.activate (9876);

    cout <<"Enter the access Code !\n";
    cin>>code;
    //taking code from user
    while (!obj.isactive(code))
    {
        obj.isactive(code);
        cout << "the code is n't activated try again!\n";
        cin>>code;

    }
    cout<< "access is granted. the door is open!\n";
//deactivation
    obj.deactivate(code);
    obj.deactivate (9999);
    obj.activate (1111);
    cout <<"Enter the access Code !\n";
    cin>> code;
// taking code from user
    while (!obj.isactive(code))
    {
        obj.isactive(code);
        cout << "the code is not activated try again!\n";
        cin>>code;
    }
    cout<< "access is granted. the door is open!\n";
    return 0;
}
