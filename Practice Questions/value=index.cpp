// Solving geeksforgeeks problem :

// Question :
// Find the elements whose value is equal to that of its index value :

// created on : 02-08-2022 : 

#include <iostream>
using namespace std;

void fun(int arr[],int sz)
{
    int i;
    for(i=0; i<sz; i++)
    {
        if(arr[i] == i+1)
        cout << arr[i] << " " ;
    }
    cout << endl;

}
// void display(int arr[], int sz)
// {
//     for(int i=0; i<sz; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
int main()
{
    int arr[5] = {25,2,15,4,63};
    fun(arr,5);   

    //display(arr,5);
}