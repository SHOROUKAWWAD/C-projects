/*
CH08-320143
a4p4.cpp
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de
*/
#include <fstream>
#include <iostream>
#include <map>

using namespace std;

int main()
{
    ifstream data ;
    string name;
    string first;
    string last;
    string date;
    //map and pair declaration
    pair <string,string> X;
    map<string, string> person;
    //opening a file
    if (!data.is_open())
    {
        data.open ("data.txt",ios::in);
    }
    if (!data.good())
    {
        cout << "error opening file\n";
        exit(1);
    }
//taking input
    while (data>>first>>last>>date)
    {
        name =first+" "+last;
        X.first=name;
        X.second=date;
        person.insert(X);
    }


    map<string,string>::iterator t;
    cout<< "Enter name\n";
    // checking for the name
    getline(cin,name);
    for (t=person.find(name); t!=++person.end(); t++)
    {
        if (t==person.end())
        {
            cout<< "the name isn't found!\n";
        }
        else
        {
            if (t != person.end())
            {

                cout<<"the date of birth is: "<< t->second <<endl;
                break;
            }
        }
    }
data.close();
return 0;

}
