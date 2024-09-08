#include <iostream>
using namespace std;
void binary_search(int arr[])
{
	int target; // 2
	cin >> target;
	bool found = false;
	int left = 0;
	int right = 4;
	int mid = (left + right)/2;
	while(left < right) // 1,2,3,4,5
	{
		if (target > arr[mid])
		{
			left = mid + 1;
			mid = (left + right) / 2;
		}
		else if (target < arr[mid])
		{
			right = mid - 1;
			mid = (left + right) / 2;
		}
		else
		{
			cout << "the numbers index is " << mid + 1;
			found = true;
			break;
		}
	}
	if (!found)
	{
		cout << "The number wasnt found in the array";
	}
}
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	binary_search(arr);
}

