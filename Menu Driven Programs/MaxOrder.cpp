#include <iostream>
using namespace std;

struct order 
{
    int order_id;
	  float totalInRupees;
    string customerName;
	  int customer_id; // unique Id
}od1[5];

void Display(int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        cout << " Customer Name : " << od1[i].customerName << endl
        << " Customers ID : " << od1[i].customer_id << endl
        << " Order ID : " << od1[i].order_id << endl
        << " Total Amount : " << od1[i].totalInRupees << endl;

    }
}

int maxOrder(int n)
{

}
int main()
{ 
    int n,i,ch;
     cout << "-------------------------------------------------------------" << endl;
     cout << " How Many Details You Want to Add : " <<endl;
     cin >> n;

    for(i=0; i<n; i++)
    {
        cout << " Enter the Customers details : " << endl;
        cout << "-------------------------------------------------------------" << endl;
        cout << " Enter the name of customer : " << endl;
        cin >> od1[i].customerName;
        cout << " Enter the Customers ID : " << endl;
        cin >> od1[i].customer_id;
        cout << " Enter the Order ID : " << endl;
        cin >> od1[i].order_id;
        cout << " Enter the Total Amount of Order : " << endl;
        cin >> od1[i].totalInRupees;

    }

    while(1)
    {
         cout << "-------------------------------------------------------------" << endl;
         cout << "-----------------------------MENU----------------------------" << endl;
          cout << "-------------------------------------------------------------" << endl;
          cout << " 1: Display All Records " << endl;
          cout << " 2: Display All Customer's name " << endl;
          cout << " 3: Display Customers Details who Purchase Maximum Orders " << endl;
          cout << " 4: Exit " << endl;

     cout << "-------------------------------------------------------------" << endl;
     cout << " Enter your choice : " << endl;
     cin >> ch;

     switch (ch)
     {
        case 1: Display(n);
        break;

        case 2: maxOrder(n);
        break;

        case 3:
        break;

        case 4: exit(0);
        break;
     }

    }
}