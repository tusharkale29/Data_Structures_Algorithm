// Program for Binaray search :
// To find a fisrt and last occurrence for the given element in array :
// Using function method :

// created on : 01-08-2022 : 

#include <iostream>
using namespace std;

// Creating function for finding first occurrence by passing elements of an array :
int fisrtOcc(int arr[], int size, int key)
{
    int s=0, e=size-1;
    
    // Finding mid point of the array :
    int mid = s + (e-s)/2;
    
    int ans = -1; // for the store the answer 
    while(s<=e)
    {
        // condition 1 :
        if(arr[mid] == key)
        {
            ans = mid;
            e = mid-1;
        }
        // condition 2 :
        else if(arr[mid] > key)
        {
            e=mid-1;
        }
        // condition 3 :
        else if(arr[mid] < key)
        {
            s = mid+1; 
        }
        mid = s + (e-s)/2; // Updating Mid 
    }
    return ans; // returning answer
}

// Creating function for finding Last occurrence by passing elements of an array :
int lastOcc(int arr[], int size, int key)
{
    int s=0, e=size-1;

    // Finding mid point of the array :
    int mid = s + (e-s)/2;
    
    int ans = -1; // for the store the answer 
    while(s<=e)
    {
        // condition 1 :
        if(arr[mid] == key)
        {
            ans = mid;
            s = mid+1;
        }
        // condition 2 :
        else if(arr[mid] > key)
        {
            e=mid-1;
        }
        // condition 3:
        else if(arr[mid] < key)
        {
            s = mid+1;
        }
        mid = s + (e-s)/2; // Updating Mid 
    }
    return ans; // returning answer
}
// Starting main function :
int main()
{
    int even[10] = {1,2,3,3,4,5,6,6,8}; // Array

    // calling firstocc function for finding first occurrence by passing elements of an array :
    cout << "First occurrence of 6 is " << fisrtOcc(even,10,6) << endl;

    // calling lastocc function for finding Last occurrence by passing elements of an array :
    cout << "last occurrence of 6 is " << lastOcc(even,10,6) << endl;

     return 0;

} // End of the program


