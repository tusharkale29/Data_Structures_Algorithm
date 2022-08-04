// Program to Arranging -ve numbers on one side and +ve numbers on another side :
// created on : 01-08-2022 : 

#include<iostream>
using namespace std;

struct array
{
    int Ara[10];
    int size;
    int length;
};

void rearrange(struct array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;

    while(i<j)
    {
        while(arr->Ara[i] < 0)i++;

        while(arr->Ara[i] >= 0)j--;

        if(i<j)
        {
         swap(&arr->Ara[i] , &arr->Ara[j]);
        }
    }
}

void printArray(struct array arr)
{
    for(int i=0; i< arr.length; i++)
    {
        cout << arr.Ara[i] << " "; 
    }
    cout << endl;
}
int main()
{
    struct array A ={{20,-85,2,95,-89,-74,50,64},10,8};

    rearrange(&A);

    printArray(A);

    return 0;
}