// Data_Structures-Algorithms
// Created by Tushar Kale on 03-06-2022

#include <iostream>
using namespace std;

int main()
 {
    // Code
    
    int n;
    cout << "Enter the size of array";
    cin >> n;
    int A[n];
    for (int x:A) 
    {
        cout << x << endl;
    }
    cout << sizeof(A) << endl;

    return 0;
}