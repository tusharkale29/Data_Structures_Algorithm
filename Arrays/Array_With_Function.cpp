#include<iostream>
using namespace std;

//creating an function : 
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
    //Declaring an array:
    int fisrt[15];
    
    //Accessing an array:
    cout << "Value at 2 index is " << fisrt[2] << endl;

    // Initilasing an array:

    int second[3] = {11,22,33};

    // Accessing an array:
    cout << "Value at 2 index is " << second[2] << endl;

    int third[4] = {10,20,30};

    //prinying an array;
    int n=4;

    // calling function :
    printArray (third, 4);
  

    //Initilising an array with '0':
    int fourth[5] = {0};
    //printing an array:
    int a = 5;

    //calling function : 
    printArray (fourth, 5);

    
}