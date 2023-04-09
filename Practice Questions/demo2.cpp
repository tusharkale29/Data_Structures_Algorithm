#include <iostream>
using namespace std;

struct order 
{
    int order_id;
	float totalInRupees;
    string customerName;
	int customer_id;
};

void printDistinct(struct order arr[],int n)
{
    int count = 0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if(arr[i].customer_id != arr[j].customer_id)
            {
                if(arr[i].customer_id == arr[j].customer_id)
                {
                    count++;
                }
            }
        }
         if(count == 0)
    {
        cout << arr[i].customerName << endl;
    }
    }
   
    // for (int i=0; i<n; i++)
    // {
    //     arr[arr[i].customer_id % n] = arr[arr[i].customer_id % n] + n;
    //     // arr[arr[i]%n] = arr[arr[i]%n] + n;

    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if(arr[i].customer_id / n > 1)
    //     cout << arr[i].customer_id <<  endl;   
    //     /* code */
    // }
    
}

int main()
{
    struct order Order1[10];

    Order1[0].order_id = 1234 ,Order1[0].totalInRupees = 550.00, Order1[0].customerName = "Shivam", Order1[0].customer_id =  22568;
    Order1[1].order_id = 1232 ,Order1[1].totalInRupees = 5520.00, Order1[1].customerName = "shyam kumar", Order1[1].customer_id = 22367;
    Order1[2].order_id = 1132 ,Order1[2].totalInRupees = 1520.00, Order1[2].customerName = "ram kumar", Order1[2].customer_id = 22567;
    Order1[3].order_id = 1133 ,Order1[3].totalInRupees = 1220.00, Order1[3].customerName = "shyam kumar", Order1[3].customer_id = 22367;
    Order1[4].order_id = 1135 ,Order1[4].totalInRupees = 2220.00, Order1[4].customerName = "ram kumar", Order1[4].customer_id = 22567;
    Order1[5].order_id = 1136 ,Order1[5].totalInRupees = 2220.00, Order1[5].customerName = "Shivam", Order1[5].customer_id = 22568;
    Order1[6].order_id = 1138 ,Order1[6].totalInRupees = 2220.00, Order1[6].customerName = "Shivam", Order1[6].customer_id = 22568;

    printDistinct(Order1,6);

}