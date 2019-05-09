/*
CH08-320143
a5p1.cpp
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de
*/
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> me;
    //push at the back of the vector
    for (int i=0; i<20; i++)
    {
        me.push_back (8);
    }

    try
    {
        for (int i=0; i<21; i++)
        {

            cout <<me.at(i);

        }

    }
    //catch the error
    catch(out_of_range e)
    {
        cout << e.what() << endl;
    }

return 0;
}





