#include <iostream>

using namespace std;

void fun(int*, int);

#define SIZE 100 

int main()
{
	int arr[SIZE];
	int size;
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	fun(arr, size);


}

void fun(int* arr, int size)
{
	int leader = arr[size - 1] - 1;

	for (int i = size - 1; i >= 0; i--)
	{
		if (arr[i] > leader)
		{
			cout << arr[i] << ' ';
			leader = arr[i];
		}
	}

}