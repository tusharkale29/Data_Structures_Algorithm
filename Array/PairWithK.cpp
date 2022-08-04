// Program to finding a pair of elements with sum K in sorted Array :
// created on : 01-08-2022 :

#include<iostream>
using namespace std;

void fun(int arr[],int size,int K)
{
    int i=0;
    int j=size-1;

    while(i<j)
    {
        if(arr[i]+arr[j]==K)
        {
            printf("%d + %d = %d " ,arr[i],arr[j],K);   
            i++;
            j--;
        }
        else if(arr[i]+arr[j] < K)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}
int main()
{

    int A[] = {1,3,4,5,6,8,9,10,12,14};
    //  int x;
    //   cin >> x;
    
    int len = sizeof(A)/sizeof(A[0]);
      
     

      fun(A,len,10);

}