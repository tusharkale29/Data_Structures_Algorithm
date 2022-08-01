//  modular_programming : 

#include <iostream>
using namespace std;

//    we do break this main function into smaller functions.
//    So that's what we will make modules and also it is called procedural programming.

int area(int l, int b)
{
    return l*b;
}

int main()
{
    int length, breadth;
    
    cout << "Enter length & breadth of rectangle" << endl;
    cin >> length >> breadth;
    
    int a = area(length, breadth);
    
    printf("Area=%d\nBreadth=%d\n", a);
    
}