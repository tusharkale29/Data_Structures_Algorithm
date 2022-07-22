// Program to count that how many spaces are in the string :

#include <iostream>
using namespace std;

int main()
{
    char s[] = "Tushar Dnyaneshwar Kale"; // this is my character array :
     int i;
    int word = 1; // this variable for my counting words
    
    // adding for loop :
    for ( i=0; s[i] != '\0'; i++)
    {
        // Putting some condition :
        // condition 1 :
        if (s[i] == ' ' && s[i-1] !=' ')
        {
            word++; // word variable are counting spaces 
        }
    } // ending for loop 
    
    // printing the statemnet :
    cout << word << " words are in the given string " << endl;

} // End of program