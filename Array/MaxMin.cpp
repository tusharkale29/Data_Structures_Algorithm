// Finding Max & Min value using function in array : 
// Question : find the maximun and minimum element in Array : 

#include<iostream>
using namespace std;

// Min Function :

int getMin ( int num[], int n)
{
    int min = INT8_MAX;


    for (int i=0; i<n; i++)
    {
        if (num[i]<min)
        {
            min = num[i];
        }
    }

    // returning Min value : 
    return min;
}

// Max function :
int getMax (int num[], int n)
{
    int max = INT8_MIN;

    for (int i=0; i<n; i++)
    {
        if (num[i]>max)
        {
            max = num[i];
        }

    }

    // returning Max value :
    return max;

}

int main()
{
    printf("start");
    printf("ENter the size of array");
    int size;
    cin >> size;

    int num[100];

    for (int i=0; i<size; i++)
    {
        cin >> num[i];
    }

    cout << " Maximun value is " << getMax (num, size) << endl;
    cout << " Manimun value is " << getMin (num, size) << endl;
    
}