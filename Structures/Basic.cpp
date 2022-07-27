// Program for structure :

// Structure is a collection of different data types.
// It is similar to the class that holds different types of data.

#include<iostream>
using namespace std;

// creating structure :
struct rectangle
{
    // data :
    int length;
    int breadth;    
};

// starting main function :
int main()
{
    struct rectangle r1; // creating variable of  structure.
    r1.length = 15; // size of length.
    r1.breadth = 10; // size of breadth.
    
    // printing statements :
    cout << r1.length<< endl; 
    cout << r1.breadth << endl;
    
    return 0;
} // end of program.
