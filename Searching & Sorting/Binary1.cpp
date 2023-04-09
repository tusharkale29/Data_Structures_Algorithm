// Program for find the given element to the given array
// Using Binary search :

#include <iostream>
using namespace std;

// Creating function for the Binary searching operation :
int binary_search(int arr[], int size, int key)
{
    int start = 0; // Index of start is start from 0;
    int end = size-1; // Index of end is start from size of array -1;
 
   int mid = start + (end-start)/2; // Finding a mid point of array;

    while(start <= end) // Looping start:
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if(arr[mid] < key)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }

        mid = start + (end-start)/2;

    }
    return -1;
} // ending function;

// starting main function :
int main()
{
    int even[6] = {2,4,8,12,18}; // Array;

    // using Binary search operation :
    int evenindex = binary_search(even,6,18); // Passing array name,size and element to find :

    // Printing the index of the element :
    cout << " 18 is found at index " << evenindex << endl;

    return 0;


}// End of the element