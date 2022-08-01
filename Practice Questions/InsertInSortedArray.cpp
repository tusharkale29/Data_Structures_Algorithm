// Inserting element in a sorted array :
// created on : 01-08-2022 : 
#include<iostream>
using namespace std;

void insertSort(int arr[], int x, int sz)
{
   int i = sz-1;
   while(arr[i] > x)
   {
      arr[i+1] = arr[i];
      i--;
   }
   arr[i+1] = x;
}

void printArray(int A[], int sz)
{
    for(int i=0; i<sz; i++)
    {
        cout << A[i] << " "; 
    }
    cout << endl;
}
int main()
{
    int A[] ={10,20,40,50};

    int arrSize = sizeof(A)/sizeof(A[0]);

    cout << "Length of array is  " << arrSize << endl;

    // printArray(A,arrSize);

    insertSort(A,30,arrSize);

    printArray(A,arrSize);

}