// Program to add element in given array :
#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int lenght;
};
void display(struct Array arr)
{
    for (int i=0; i< arr.lenght; i++)
    {
        cout << arr.A[i] << " " ;
    }
}
int add(struct Array *A1, int x)
{
    if (A1->lenght < A1->size)
    {
        A1->A[A1->lenght++] = x;
    }
}
int main()
{
    struct Array A1 = {{10,20,30,40,50},10,5};
    add(&A1,60);
    display(A1);

}