// Program Access all the elements using pointers in array :

#include<iostream>
using namespace std;

int main()
{
    int A[5] = {2,5,7,9,4};
    int *p;
    p=A;

    for(int i=0; i<5; i++)
    {
        cout << p[i] << endl;
    }
}