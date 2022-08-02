// Solving LeetCode Question :

// Question :
// Given two string S and Part.
// Find the left most occurrence of the substring Part and remove it from S.
// return S after removing all occurrence of Part.

// Substring : it is contiguous of character in string.

// created on : 02-08-2022 : 

#include <iostream>
#include<string.h>
using namespace std;

void deleteOccu(char S[], char part[])
{
     int i=0;
     
     int lenS = strlen(S);
     int lenP = strlen(part);

     while ( i < lenS)
     {
        if ( strstr (&S[i], part) == &S[i])
        {
            lenS -= lenP;

            for (int j=i; j < lenS; j++)

            S[j] = S[ j + lenP];
        }
        else i++;
     }

     S[i] = '\0';
}
void printString(char s[])
{
    int i;
    for(i=0; s[i] != '\0'; i++)
    {
        cout << s[i];
    }
    cout << endl;
}
int main()
{
    char S[] = "daabcbabc";

    char part[] = "abc";

    
    printString(S);


    deleteOccu(S,part);
    
    printString(S);


    return 0;
}