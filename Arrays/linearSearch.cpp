// linear search :
// Question = Finding an elemnet which is present in array :

#include<iostream>
using namespace std;

// creating function for linear search :
bool search (int arr[], int size, int key)
{
    for (int i=0; i<size; i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }
    }
    return 0;

}

int main()
{
    int arr[5] = {-2, 20, 4, -5, 10}; // array 

    int key;
    cout << "Enter the element to search " << endl; // printing statement for the input 
    cin >> key;

     // Calling search function :
    bool found = search (arr, 5, key);

    if (found)
    {
        cout << "Key is Present" << endl;
    }
    else
    {
        cout << "Key is absent" << endl;
    }
    return 0;

}