#include <iostream>
using namespace std;

int Bsearch(int arr[],int size,int key)
{
    int i,j;
    i=0;
    j=size-1;
    int mid = i + (j-i)/2;

    while(i<=j)
    {
        if(arr[mid] == key)
        return mid;

        else if(arr[mid] >= arr[i])
        {
            if(arr[mid] >= key && arr[i] <= key)
            j=mid-1;

            else 
            i=mid+1;
        }
        else
        {
            if(arr[mid] <= key && arr[j] >= key)
            i=mid+1;

            else
            j=mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {4,5,6,7,0,1,2,3};
    int len = sizeof(arr)/sizeof(arr[0]);

    Bsearch(arr,len,5);
}