#include <iostream>
using namespace std;

struct order 
{
    int order_id;
	float totalInRupees;
    string customerName;
	int customer_id;
};
int maxOrder(struct order od1[], int len)
{
    int i, j, maxorder;
    int count = 0;
     int maxCount = 0;
   
    for(i = 0; i< len; i++)   
    {
        count = 1;
        for(j = i+1; j < len; j++)  
        {
            if(od1[j].customer_id == od1[i].customer_id)
            {
                count++; 
                if(count > maxCount)
                {
                    maxorder = od1[j].customer_id;
                }
            }
        }
    }
    return maxorder;
}
int main()
{
    struct order Order1[5];

    Order1[0].order_id = 1234 ,Order1[0].totalInRupees = 550.00, Order1[0].customerName = "ram kumar", Order1[0].customer_id = 22567;
    Order1[1].order_id = 1232 ,Order1[1].totalInRupees = 5520.00, Order1[1].customerName = "shyam kumar", Order1[1].customer_id = 22367;
    Order1[2].order_id = 1132 ,Order1[2].totalInRupees = 1520.00, Order1[2].customerName = "ram kumar", Order1[2].customer_id = 22567;
    Order1[3].order_id = 1133 ,Order1[3].totalInRupees = 1220.00, Order1[3].customerName = "shyam kumar", Order1[3].customer_id = 22367;
    Order1[4].order_id = 1135 ,Order1[4].totalInRupees = 2220.00, Order1[4].customerName = "ram kumar", Order1[4].customer_id = 22567;

    int get = maxOrder(Order1, 5);
    cout << get;
}