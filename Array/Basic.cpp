#include<iostream>
using namespace std;

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

    int third[15] = {10,20,30};

    //prinying an array;
    int n=15;
    for(int i =0; i < n; i++)
    {
        cout << third[i];
    
    }
  

    //Initilising an array with '0':
    int fourth[5] = {0};
    //printing an array:
    int a = 5;
    for (int i = 0; i < a; i++)
    {
        cout << endl << fourth[i]  ;
    }

    
}