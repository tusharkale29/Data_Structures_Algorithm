// Pass by value or call by value :

#include <iostream>
using namespace std;

void add(int x, int y)
{

   x++; 
   cout << x << endl;

}

int main()
{
    int A=10, B=20;
    add(A,B);
    cout << A << endl; 

}