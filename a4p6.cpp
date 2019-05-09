/*
CH08-320143
a4p5.cpp
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de
*/
#include <iostream>
#include <map>
#include <string>

using namespace std;
class Access
{
public:

    void activate (unsigned int code,unsigned int level)
    {
        pair <int,int> X;
        X.first =code;
        X.second =level;
        codes.insert(X);
    }
    void deactivate (unsigned int code)
    {
        codes.erase (code);
    }
    bool isactive (unsigned int code, int level)
    {
        const bool exists = codes.find(code) != codes.end()&& codes[code]==level;
        return exists;
    }

private:
    map<int,int> codes;
};
int main()
{

    Access p;
    p.activate (1234,1);
    p.activate (9999,5);
    p.activate (9876,9);

    int level;
    level =5;
    cout << "Enter the code: ";
    int code;
    cin>> code;
// taking code from user
    while (!p.isactive(code,level))
    {
        p.isactive(code,level);
        cout << "this code is not activated for this level!\n";
        cin>>code;
    }
    cout<< "access is granted. the door is open!\n";

    p.deactivate (code);
    p.activate (code,8);
    p.activate (1111,7);
// taking code from user
    cout << "Enter the code: ";
    cin>> code;
    while (!p.isactive(code,7))
    {
        p.isactive(code,7);
        cout << "this code is not activated for this level!\n";
        cin>>code;
    }
    cout<< "access is granted. the door is open!\n";

return 0;
}
