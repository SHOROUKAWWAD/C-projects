/*CH08-320143
a4p2.cpp
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <ctime>
#include <set>

using namespace std;
int main ()
{
    int lot;
    srand(time(0));
//declaring a set
    set<int> sint;
// random values insertion
    for (; sint.size()<=6;)
    {

        lot = rand()%49+1;

        sint.insert(lot);

    }
// printing a set in ascending order
    set<int>:: iterator c;

    for(c = sint.begin(); c!= sint.end(); c++)
    {
        cout << *c << " ";
    }
    cout << endl;

    return 0;


}
