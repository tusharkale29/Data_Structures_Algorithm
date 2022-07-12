// Question = Given an unsorted array arr[] of size N having both negative and positive integers.
// The task is place all negative element at the end of array without changing
// the order of positive element and negative element.
// Example 1:
// Input :
// N = 8
// arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
// Output :
// 1 3 2 11 6 -1 -7 -5


// Program started : 
#include<iostream>
using namespace std;

void printArray (int arr[], int size)
{
    cout << " Printing an array "<< endl;
    //print an array : 
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << arr[i] << " ";

       
    }
    cout << " Printing Done " << endl;
}   

int main()
{

    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;

    int arr[10];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int i=-1;
    int pivot4 = 0;

    for (int j=0; j<size; j++)
    {
        if(arr[j] < 0)
        {
            i--;
            swap (arr[i], arr[j]);
        }
    }
     printArray(arr, 10);



}
