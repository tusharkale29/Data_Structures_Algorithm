// Array as a parameter :

#include<iostream>
using namespace std;

void fun(int arr[], int size)
{
    arr[0] = 100;
}
int main()
{
    int A[] = {10,20,30,40,50};
    int n = 5;

    fun(A,n);

    for(int i=0; i<n; i++)
    {
        cout << A[i] << endl;
    }
}