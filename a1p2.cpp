/*CH08-320143
a1p1.cpp
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/
#include <iostream>
#include <fstream>

using namespace std;


int main ()
{
// declaring variables
    int n;
    char c;
    cin >>n;
    ifstream * names= new ifstream [n];
    string* name = new string [n] ;
//get values from the user
    for (int i=0; i<n; i++)
    {
        cin >> name [i];
    }
    // output file
    ofstream output;
    if(!output.is_open())
        output.open("concatn.txt",ios::binary|ios::out);

    for (int i=0; i<n; i++)
    {
        if (!names[i].is_open())
        {
            names[i].open(name[i],ios::binary|ios::in);

        }
        if (!names[i].good())
        {
            cout <<"Error"<<endl;
            exit(1);
        }
        names[i].get(c);
        while (!names[i].eof())
        {
            output.put(c);
            names[i].get(c);

        }

    }
// close the files
    for (int i=0; i<n; i++)
    {
        names[i].close();

    }
    output.close();


        delete []names;
        delete []name;


    return 0;

}
