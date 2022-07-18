// structure_functions.cpp : 

#include <iostream>
using namespace std;

//    Now, we know that the length & breadth are the properties of a rectangle.
//    Why not combine thier declaration into a structure.

//    This program depicts how structure & functions lead to better programming way.

struct Rectangle {
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b){
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r)
{
    return r.length*r.breadth;
}

int main() 
{
    struct Rectangle r;
    int l,b;
    
    cout << "Enter length & breadth of rectangle" << endl;
    cin >> l >> b;
    
    initialize(&r, l, b);
    
    int a = area(r);
    
    printf("Area=%d\nBreadth=%d\n", a);
    
}