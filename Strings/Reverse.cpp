// Reverse the give name(string) :

#include<iostream>
using namespace std;

// Creating a function for the reverse operation :
int reverse(char arr[], int size)
{
    int s=0;
    int e=size-1;

    while (s<e)
    {
        swap(arr[s++], arr[e--]);
    }
}

// Creating a function for the calculate length of string :
int getLength(char arr[])
{
     int count = 0;
    for (int i=0; arr[i] !='\0'; i++)
    {
       count++;
        
    }
     return count;
}

// Starting main function :
int main()
{
    char name[100]; // char Array

    cout << "Enter your name" << endl;
    cin >> name; // Input

    // calculating the length of string using function :
    int len = getLength(name);

    // calling reverse function :
    reverse(name,len);

    // Printing a reverse string :
    cout << "reverse name = " << name;

} // End of the program.