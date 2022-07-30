// returning array using pointer :

#include<iostream>
using namespace std;

int * sun(int size)
{
    int *p;
    p = new int[size];

    for(int i=0; i<size; i++)
    p[i]=i+1;

    return p;
}
int main()
{
    int *ptr, sz=5;

    ptr = sun(5);

    for (int i=0; i<sz; i++)
    {
        cout << ptr[i] << endl;
    }
}