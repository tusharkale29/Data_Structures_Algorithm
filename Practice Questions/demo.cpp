#include <iostream>
using namespace std;

int main()
{
  int arr1[5] = { 10,20,30,40,50};

  int *p;
  p = new int[5];

  p[0] = 60;
  p[1] = 70;
  p[2] = 80;
  p[3] = 90;
  p[4] = 100;

  for (int i=0; i< 5; i++)
  {
    cout << arr1[i] << " ";
  }
  cout << endl;

  for (int i=0; i<5; i++)
  {
    cout << p[i] << " ";
  }
   delete []p;
}