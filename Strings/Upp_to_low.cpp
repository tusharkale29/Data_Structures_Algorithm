// Program to convert the Upper case string to lower case string :

#include <iostream>
using namespace std;

int main()
{
   char s[] = "WELCOME"; // character array
    
    // Befor the change :
    cout << s << endl;
    // starting for loop :
   for (int i=0; s[i] !='\0'; i++) // int i start from 0 to '\0'(end of string)
   {
     // here the difference between upper_case ASCII value 
     // and Lower_case ASCII value is 32 
     // so we are Adding 32 :
     s[i] = s[i] + 32; // Logic  

   }
   //printing the changed case :
   cout <<s << endl;

} // End of program 
