// Program to convert the lower case string to Upper case string :

#include <iostream>
using namespace std;

int main()
{
   char s[] = "welcome"; // character array
    
    // Befor the change :
    cout << s << endl;
    // starting for loop :
   for (int i=0; s[i] !='\0'; i++) // int i start from 0 to '\0'(end of string)
   {
     // here the difference between Lower_case ASCII value 
     // and Upper_case ASCII value is 32 
     // so we are subtracting 32 :
     s[i] = s[i] - 32; // Logic  

   }
   //printing the changed case :
   cout <<s << endl;

} // End of program 
