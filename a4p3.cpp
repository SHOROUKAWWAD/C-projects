/*
CH08-320143
a4p3.cpp
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de
*/
#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main ()
{

    set<int> A;
    multiset <int> B;
    set<int> D;
    set<int> E;
    set<int> G;
    int n;
    cin >>n;
    while (n>=0)
    {

        A.insert(n);
        B.insert(n);
        cin>>n;
    }

    set<int>:: iterator l;
cout << "SET A:"<<endl;
    for (l=A.begin(); l!=A.end(); l++)
    {

        cout<< *l<<endl;

    }

cout << "M-SET B:"<<endl;
    for (l=B.begin(); l!=B.end(); l++)
    {

        cout<< *l<<endl;

    }

    A.erase(5);
    B.erase(5);
cout << "SET A after erasing 5:"<<endl;
    for (l=A.begin(); l!=A.end(); l++)
    {

        cout<< *l<<endl;

    }

cout << "M-SET  B after erasing 5:"<<endl;
    for (l=B.begin(); l!=B.end(); l++)
    {

        cout<< *l<<endl;

    }

    A.insert (14);
    A.insert(198);
cout << "SET A after adding 5:"<<endl;
    for (l=A.begin(); l!=A.end(); l++)
    {

        cout<< *l<<" ";

    }
cout <<endl;
    multiset<int> C;
    multiset <int> :: iterator it;
//union
    set_union (A.begin(), A.end(), B.begin(), B.end(), inserter(C,C.begin()));
cout << "UNION: "<<endl;
    for (l=C.begin(); l!=C.end(); l++)
    {

        cout<< *l<<" ";

    }
    cout <<endl;
//intersection
    set_intersection (A.begin(), A.end(), B.begin(), B.end(), inserter(E,E.begin()));
cout << "INTERSECTION: \n";
    for (l=E.begin(); l!=E.end(); l++)
    {

        cout<< *l<< " " ;

    }
    cout <<endl;
// set difference
    set_difference (A.begin(), A.end(), B.begin(), B.end(), inserter(D,D.begin()));
cout << "DIFFERENCE: \n";
    for (l=D.begin(); l!=D.end(); l++)
    {

        cout<< *l<< " " ;

    }
    cout <<endl;
// symmetric difference
    set_symmetric_difference (A.begin(), A.end(), B.begin(), B.end(), inserter(G,G.begin()));
cout << "SYMETRIC DIFFERENCE: \n";
    for (l=G.begin(); l!=G.end(); l++)
    {

        cout<< *l<< " " ;

    }
    cout <<endl;

}
