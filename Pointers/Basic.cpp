// Program for pointers :

// The pointer is a variable.
// it is also known as locator or indicator that points to an address of a value.
// Pointers are used for indirectly accessing the data.

// Question : Why we need a pointers :
// Ans : 1. Accessing heap memory.
//       2. Accessing resources.
//       3. for parameter passing.      
#include<iostream>
using namespace std;

int main()
{
    int A = 10;
    int *p;
    p= &A;

    cout << "Using Pointer " << *p << endl;

}