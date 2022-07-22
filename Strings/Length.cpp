 // calculating the length of string using function :

#include<iostream>
using namespace std;

// Creating a function for the calculate length of string :
int getLength(char name[])
{
    int count = 0;
    for (int i=0; name[i] !='\0'; i++)
    {
        count++;
    }
    return count;

}
// Starting main function :
int main()
{
    char name[100]; // char Array

    cout << " Enter your name " << endl;
    cin >> name; // Input

    cout << " Your name is " << name << endl;

    // calculating the length of string using function :
    cout << "Length is " << getLength(name) << endl;

    return 0;
}// End of the program.