// Program to check the given string is valid or not :
// Using function :
#include <iostream>
using namespace std;

// Creating a function to check the string is valid or not :
int valid(char name[])
{
    int i;
    // Loop start :
    for (i=0; name[i] != '\0'; i++) // entire string is checking
    {
        // condition :
        if(!(name[i] >= 65 && name[i] <=90) &&
         ! (name[i] >=97 && name[i] <= 122) &&
         ! (name[i] >= 48 && name[i] <= 57))
        {
            return 0; // returning true value (yes)
        }
    }
    return 1; // returning false value (not)
}
// starting main function :
int main()
{
    char name[] = "tushardkale29@gmailcom"; // character array :
     
     // condition 1 :
    if(valid(name)) // passing char array to function 
    {
       cout << "String is valid " << endl;

    }   
    else
    {
        cout << " String is not valid " << endl;

    }
} // end of program