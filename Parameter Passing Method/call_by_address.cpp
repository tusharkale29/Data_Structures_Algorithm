// Pass by Address or call by Address :

#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int A=10, B=20;

    swap(&A,&B);

    cout << A << endl << B << endl;
} 