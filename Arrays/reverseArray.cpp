// Reverse Array :
// Question = Reverse the given array :


#include<iostream>
using namespace std;

// creating function for the reversing element of an array :
void reverse(int arr[], int size)
{
   int start = 0; // index of array is start from 0
   int end = size-1; // index of array is end to size-1
    
    // Using do while loop :
   do {
    swap (arr[start], arr[end]);
    start ++;
    end --;
   }
   while (start<=end);
}

// creating function for the printing  reverse element of an array
void printArray ( int arr[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << arr[i] << " "; 
        
    }
    cout << endl;
}
int main()
{
    int arr[5] = {10,20,30,40,50};

    // Calling printing function :
    cout << "Array before reverse " << endl;
    printArray(arr, 5); 
    
    // Calling reverse function :
    reverse(arr,5);

    // Calling printing function :
    cout << "Array After reverse " << endl;
    printArray(arr, 5);

    return 0;

}