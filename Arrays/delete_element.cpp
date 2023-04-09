#include<iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};
int Delete (struct array *arr, int index)
{
    int x = 0;
    int i;
    if (index >=0 && index < arr->length)
    {
        x=arr->A[index];
        for (i = index; i<arr->length; i++)
        arr->A[i] = arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;
}
int main()
{
    struct array A = {{10,20,20,30,40},10,5};
    
    Delete(&A,2);
    for (int i=0; i<A.length; i++)
    {
        cout << A.A[i] << " ";
    }
}