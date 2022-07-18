//  monolithic_programming : 

#include <iostream>
using namespace std;

// as this is a monolithic program, we will write all instructions in one function i.e 'main'

int main() 
{
    int length=0, breadth=0;
    
    cout << "Enter length & breadth of rectangle" << endl;
    cin >> length >> breadth;
    
    int area = length*breadth;
    
    printf("Area=%d\nBreadth=%d\n", area);
    
}