// Program to convert the Upper case character to lower case character
// and lower case character to upper case character in given character array :

#include <iostream>
using namespace std;

int main()
{
   char s[] = "WeLComE"; // character array
    
    // Befor the change :
    cout << s << endl;
    // starting for loop :
   for (int i=0; s[i] !='\0'; i++) // int i start from 0 to '\0'(end of string)
   {
     // here the difference between upper_case ASCII value 
     // and Lower_case ASCII value is 32 
     // so we are putting cindition :

     // Condition 1 :
     // condition for change the upper case character to lower case character : 
    if(s[i] >= 65 && s[i] <=90) 
    {
        s[i]+=32;
    }

    // Condition 2 :
     // condition for change the Lower case character to Upper case character : 
    else if(s[i] >=97 && s[i] <=122)
    {
        s[i]-=32;
    }

   }
   //printing the changed string :
   cout << s << endl;

} // End of program 
