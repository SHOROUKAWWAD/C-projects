#include <iostream>
#include <cstdlib>
#include <queue>
#include <string>
using namespace std;
struct classcomp {
  bool operator() (const int& lhs, const int& rhs) const
  {return lhs>rhs;}
};

int main (){

priority_queue <float,classcomp> q;
  float n;
  cin  >>n;
 while (n!=0){

    q.push_front (n);
    cin>>n;
 }



}
