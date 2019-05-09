#include <iostream>
#include <list>
#include <string>
#include <fstream>

using namespace std;

int main (){
cout << "went here \n";
ofstream Out ;
if (!Out.is_open()){
    Out.open("output!", ios::out);
}

if (!Out.good()){

    cout << "error opening the file!\n";
    exit (-1);

}
int b;
list <int> l1;
list<int> l2;
cin >> b;
while (b>0){
l1.push_back(b);
l2.push_front (b);
cin >> b;
 }
list <int > :: iterator a;
for (a=l1.begin(); a != l1.end(); a++){


     cout << *a<<" ";
    }

cout <<endl;

for (a=l2.begin(); a!=l2.end(); a++){

    Out << *a <<" ";


}
    Out << endl;


int p,q;

p=l1.front ();
q=l2.front();

l1.pop_front();
l2.pop_front();

l1.push_back (p);
l2.push_back (q);

for (a=l1.begin(); a!=l1.end(); a++){

    if (a==--l1.end()){

        cout << *a<<endl;
    }else {

    cout << *a<< ",";

    }

}

for (a=l2.begin(); a!=l2.end(); a++){

    if (a==--l2.end()){

        cout << *a<<endl;
    }else {

    cout << *a<< ",";

    }

}

l1.merge(l2);


for (a=l1.begin(); a!=l1.end(); a++){

    if (a==--l1.end()){

        cout << *a<<endl;
    }else {

    cout << *a<< ";";

    }

}


}
