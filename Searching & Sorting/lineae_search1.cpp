// C++ code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1

#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)

		if (arr[i] == x)
        {
			return i;
        }
       
	return -1;
}

int main()
{
	int arr[5] = { 2, 3, 4, 10, 40 };

	// Function call
	int result = search(arr, 5, 40);

	cout  << result << endl;

}