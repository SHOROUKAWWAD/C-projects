/*
CH08-320143
a3p4.cpp
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de
*/
#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;
//class WindGauge
class WindGauge
{
public:
    WindGauge (int period =12) {
    this->period=period;
    }
    void currentWindSpeed (int speed)
    {

        if (Gauge.size()>= period)
        {
            cout << "once";
            Gauge.pop_back();
            Gauge.push_front(speed);
        }
        else
        {
            Gauge.push_front(speed);

        }
    }

    int highest()const
    {
        int A = *max_element(Gauge.begin(), Gauge.end());
        return A;
    }
    int lowest()const
    {
        return *min_element(Gauge.begin(), Gauge.end());
    }
    int average()const
    {
        int av = (accumulate(Gauge.begin(), Gauge.end(),0))/12 ;
        return av;
    }
    void dump ()
    {

        cout<<"lowest: " <<lowest()<<endl;
        cout<<"highest: " <<highest()<<endl;
        cout<<"average: " <<average()<<endl;

    }
    deque <int> Gauge;

private:
   unsigned int period;

};


int main ()
{// creating a object
    WindGauge Egypt  (12) ;
//adding speeds
    Egypt.currentWindSpeed (15);
    Egypt.currentWindSpeed (16);
    Egypt.currentWindSpeed (12);
    Egypt.currentWindSpeed (15);
    Egypt.currentWindSpeed (15);
    cout<< "Before the  measurements are added lol!\n";
//printing
    Egypt.dump();
    Egypt.currentWindSpeed (16);
    Egypt.currentWindSpeed (17);
    Egypt.currentWindSpeed (16);
    Egypt.currentWindSpeed (16);
    Egypt.currentWindSpeed (20);
    Egypt.currentWindSpeed (17);
    Egypt.currentWindSpeed (16);
    Egypt.currentWindSpeed (15);
    Egypt.currentWindSpeed (16);
    Egypt.currentWindSpeed (20);
    cout<< "After the measurements are added lol!\n";
    Egypt.dump();
return 0;
}

