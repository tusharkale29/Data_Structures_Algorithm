#include<iostream>
using namespace std;

void reverse(char arr[], int n)
{
    int s=0;
    int e=n-1;

    while (s<e)
    {
        swap(arr[s++], arr[e--]);
    }    
}
int getLength(char name[])
{
    int count = 0;
    for (int i=0; name[i] !='\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[10];

    cout << " Enter your name " << endl;
    cin >> name;

    cout << " Your name is " << name << endl;
    int len = getLength(name);
    cout << "Length is " << len << endl;

    cout << "Reverse name is " << endl;
   reverse(name,len);
   cout << name;
}