/*CH08-320143
a2p1.cpp
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/

#include <iostream>
#include <cstdlib>


template <class T>
int searchElement (T *array, T elem,int n)
{
    int i;
    for ( i=0; i<n; i++)
    {
        if (array[i]==elem)
        {

            return i;
        }

    }
    return -1;

}

class Complex
{
public:
    Complex ()
    {

    };
    Complex (Complex &obj)
    {
        obj.a=a;
        obj.b=b;

    }
    Complex (float c, float d)
    {
        a=c;
        b=d;
    }
    bool operator == (const Complex& C2)
    {

        if (a==C2.a&&b==C2.b)
        {
            return true;

        }
        else
        {
            return false;
        }
    }

private :
    float a;
    float b;

};
using namespace std;
int main ()
{// testing for an array of int
    int e;
    int  n;
    cout << "Enter the number of elements of the array:\n";
    cin>>n;
    int array [n];
    cout << "Enter the elements of the array:\n";
    for (int i=0; i<n; i++)
    {

        cin>> array[i];

    }

    cout << "Enter the element you want to know its position:\n";
    cin>>e;
    if (searchElement (array,e,n)==-1)
    {

        cout << "The element is not found\n";

    }
    else
    {
        cout << "the position of the element in the array: "<<searchElement (array,e,n)<<endl;

    }

// complex array search
    Complex arr[7];

    arr[0] = Complex(1,1);
    arr[1] = Complex (1,3);
    arr[2] = Complex(2,1);
    arr[3] = Complex (3,4);
    arr[4] = Complex (5,6);
    arr[5] = Complex (7,8);
    arr[6]= Complex (4,6);

    cout << "the position of  the element 1+3i in the  Complex array is:"<< searchElement(arr,arr[1],7)<<endl;
//testing for an array of floats

    float array2[5];
    array2[0]=1;
    array2[1]=4;
    array2[2]=5;
    array2[3]=6;
    array2[4]=7;
    float a=6;

    cout << "The position of the Element 6 in the float array is : "<< searchElement (array2,a,5)<<endl;
    return 0;


}


