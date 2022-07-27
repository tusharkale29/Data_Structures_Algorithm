// program to accessing structure using pointers :

#include <iostream>
using namespace std;

struct rectangle
{
    /* data */
    int length;
    int breadth;
};

int main()
{
    struct rectangle r = {10,5};
    
    cout << r.length << endl;
    cout << r.breadth << endl;

    // accessing structure using pointers :
    struct rectangle *p;

    p = new rectangle;

    p->length = 20;
    p->breadth = 15;

    cout << p->length << endl;
    cout << p->breadth << endl;

}