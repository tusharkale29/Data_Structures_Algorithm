// Swap alternate element of Array :
// Question = swap the element of the given array :

#include<iostream>
using namespace std;

// creating function for the swaping element of an array :
void swap (int arr[], int size)
{
    for (int i=0; i<size; i+=2)
    {
        if (i+1< size)
        {
            swap (arr[i], arr[i+1]);
        }
    
    }
}

// creating function for the printing  reverse element of an array :
void printArray (int arr[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout<< arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[4] = {1,2,3,4}; // array

    cout << "Array before swap" << endl;
    // Calling printing function :
    printArray(arr, 4); 
    
    swap (arr,4);

     cout << "Array after swap" << endl;
    // Calling printing function :
    printArray(arr,4);

}