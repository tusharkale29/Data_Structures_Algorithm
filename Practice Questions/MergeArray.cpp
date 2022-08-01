// program to merge two arrays :

// created on : 01-08-2022 : 

#include<iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};
struct array * merge (struct array *arr1, struct array *arr2)
{
    int i,j,k;
    i=j=k=0;

    struct array *arr3=(struct array *)malloc(sizeof(struct array));

    while (i<arr1->length && arr2->length)
    {
        if(arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else
        {
            arr3->A[k++] = arr2->A[j++];
        }
    }
    for(; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i]; 

    for(; j < arr2->length;i++)
        arr3->A[k++] = arr2->A[j]; 

    arr3->length = arr1->length + arr2->length;
    arr3->size=10;

    return arr3;
}
void printarray(struct array arr)
{
    for(int i=0; i<arr.length; i++)
    cout << arr.A[i] << " ";

    cout << endl;
}
int main()
{
    struct array Arr1 = {{3,8,16,20,25},10,5};
    struct array Arr2 = {{4,10,12,22,23},10,5};
    struct array *arr3;

    arr3 = merge(&Arr1,&Arr2);

    printarray(*arr3);

}