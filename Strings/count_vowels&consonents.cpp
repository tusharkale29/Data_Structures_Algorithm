// Program to count the vowels and consonants in the given string :

#include <iostream>
using namespace std;

int main()
{
    char s[] ="Tushar Kale";

    int vcount = 0; // for Vowels count
    int ccount = 0; // for consonants count
    
    // taking for loop :
    for (int i=0; s[i] != '\0'; i++)
    { 
        // putting conditions :

        // condition 1 :
        // for finding vowels :
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' )
        vcount++; // counting vowels;
        
        // condition 2 :
        // for finding consonants :
        else if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) )
        ccount++; // counting consonants;
    
    } // end of loop 
     
    // Printing the count of vowels and consonants :
    cout << "Vowels are " << vcount << endl;
    cout << "Consonents are " << ccount << endl;

}// end of program  