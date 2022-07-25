// Program to check the string is Palindrome or not :
#include<iostream>
using namespace std;

// we need a lenght of string to check the string is palindrome or not
// so we are finding a length of string using function :
int length(char arr[])
{
    int count = 0;
    for (int i=0; arr[i] !='\0'; i++)
    {
        count++;
    }
    return count;
    
}

// here we are creating a function to check the palindrome:
int pal(char arr[], int size )
{
     int s=0;
    int e=size-1;
    if(arr[s++] == arr[e--])
    {
        cout << " String is Palindrome" << endl;
    }
    else{
        cout << "String is not Palindrome" << endl;
    }
}
// starting main function :
int main()
{
    char name[] = "madam"; // character array :
      
      // finding legth of a string using function :
      int len= length(name);

      // checking string is palindrome or not using by function :
    pal(name,len);

} 