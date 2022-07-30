// Program to Insert element in given array :
#include<iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};
void insert (struct array *arr, int index, int x)
{
    if (index >= 0 && index < arr->size)
    {
        for (int i = arr->length; i > index; i--)
        arr->A[i]=arr->A[i-1];
        arr->A[index] = x;
        arr->length++;
    }
    
}
int main()
{
    struct array A = {{20,30,40,50,60},10,5};
    
    insert(&A,0,10);
    for (int i=0; i<A.length; i++)
    {
        cout << A.A[i] << " ";
    }

    

}