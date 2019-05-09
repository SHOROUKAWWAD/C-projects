/*CH08-320143
a3p14cpp
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de
*/
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int main ()
{
    float m;
// declaring a deque
    deque <float> X;

    cin>>m;
// inserting values
    while (m!= 0)
    {

        if (m>0)
        {
            X. push_back(m);
        }
        else
        {

            X. push_front(m);
        }
        cin>>m;

    }
    deque <float> :: iterator r;
// printing the element without the zero
    cout << "Without the zero: ";
    for (r =X.begin(); r != X.end(); r++)
    {
        cout << *r<< " ";
    }
    cout << endl;

// inserting the zero at the middle
    for (r =X.begin(); r != X.end(); r++)
    {
        if (*r>0)
        {
            X.insert(r,0.0f);

            break;
        }
    }

    cout << "With the zero: ";
    for (r =X.begin(); r != X.end(); r++)
    {
        if (r==--X.end())
        {
            cout << *r<<endl;
        }
        else
        {
            cout << *r<< ";";
        }
    }
    return 0;

}
