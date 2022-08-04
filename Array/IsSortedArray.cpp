// Program to check the array is sorted or not :
// created on : 01-08-2022 : 

#include<iostream>
using namespace std;

int isSorted(int arr[], int sz)
{
    for(int i=0; i<sz; i++)
    {
        if(arr[i] > arr[i+1])
        return 0;
    }
    return 1;
}
int main()
{
    int A[] = {2,4,6,8,10};
    
    int len = sizeof(A)/sizeof(A[0]);

    // cout << "Length of array is " << len << endl;
   
    int sort = isSorted(A,len);
    cout << sort << endl;
}