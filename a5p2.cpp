/*
CH08-320143
a5p2.cpp
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de
*/
#include <iostream>
#include <vector>

using namespace std;
//declaring class
class OwnException: public exception
{
public:
    OwnException (string l)
    {
        s=l;
    }

    virtual const char* what()const throw()
    {
        return "OwnException\n";
    }
private:
    string s;
};
//Exception function
int functione(int i)
{
    switch (i)
    {
    case 1:
        throw ('a');
        break;
    case 2:
        throw (12);
        break;
    case 3:
        throw (true);
        break;
    default:
        OwnException myownexception ("Default case exception") ;
        throw myownexception;
    }
}

int main()
{   //try
    try
    {
        int i;
        cin>>i;
        functione(i);
    }//catch
    catch(int k)
    {
        cerr<<"Caught an integer exception: "<<k<<endl;
    }
    catch(char l)
    {
        cerr<< "Caught a character exception: "<<l<<endl;
    }
    catch (bool a)
    {
        cerr<< "Caught a boolean exception: "<< a<<endl;
    }
    catch (OwnException m)
    {
        cerr <<"caught Ownexception:"<< m.what()<<endl;
    }
    return 0;
}


