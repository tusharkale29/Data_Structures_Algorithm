// Program for references

// When a variable is declared as a reference,
// it becomes an alternative name for an existing variable. 
// A variable can be declared as a reference by putting ‘&’ in the declaration.

#include<iostream>
using namespace std;

int main ()
{
    int a =10;
    int &r = a;
     
     r=20;
    cout << a << endl << r << endl;

}