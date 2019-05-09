/*CH08-320143
a3p6.cpp
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <queue>

using namespace std;
// print function
template<class T>
void printQueue(T& q)
{
    while (!q.empty())
    {
        cout << q.top() << endl;
        q.pop();
    }
}
// comparison class
struct classcomp
{
    bool operator() (const float& lhs, const float& rhs) const
    {
        return lhs>rhs;
    }
};

int main()
{
    float n;
    //declaring two priority queues
    priority_queue<float,std::vector <float>,classcomp> q;
    priority_queue <float> m;
    cin>>n;

    while (n!=0)
    {
        q.push(n);
        m.push(n);
        cin>>n;
    }

    cout << "without using the comparison function:\n";
    printQueue(m);
    cout << "with using the comparison function:\n";
    printQueue(q);

    return 0;
}
