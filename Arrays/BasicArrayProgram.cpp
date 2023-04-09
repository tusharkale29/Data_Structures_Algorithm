//  Array Basic Program in c++.
///  Created on -4-08-2022.

#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};

void printArray(struct array arr)
{
    for(int i=0; i< arr.length; i++)
    {
        cout << arr.A[i] << " "; 
    }
    cout << endl;
}
int deleteElement(struct array *arr1, int index)
{
    int x=0;
    if (index >= 0 && index < arr1->length)
    {
        x = arr1->A[index];
        for (int i =index; i < arr1->length; i++) 
        {
            arr1->A[i] = arr1->A[i+1];
        }
        arr1->length--;
    }
    return x;
}

// void Insert(struct array arr1[],int index, int x)
// {
//     if (index >= 0 && index <= arr1->length)
//      {
//         for (int i = arr1->length-1; i > index; i--) 
//         {
//             arr1->A[i+1] = arr1->A[i];
//         }
//         arr1->A[index] = x;
//        arr1->length++;
//     }
// }


int main()
{
    struct array arr = {{10,14,24,26,31},10,5};
    cout << "Array before Operations : " << endl;
    printArray(arr);

    deleteElement(&arr);
    cout << "Array After delete operation : " << endl;
    printArray(arr);
}