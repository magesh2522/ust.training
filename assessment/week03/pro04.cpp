#include <iostream>

using namespace std;	

int check(int*, int);
#define SIZE 30 

int main()
{

	int arr[SIZE];
	int size;
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	int A= check(arr, size);

	cout << A << endl;


}
int check(int* arr, int size)
{
	int left_S = 0, right_S = 0;

	for (int i = 0; i < size; i++)
	{
		right_S += arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		right_S -= arr[i];
		if (left_S == right_S)
			return i;

		left_S += arr[i];
	}

	return -1;

}
/*You are given an array A of N positive or negative integers. Your task is to find the first equilibrium position in the array.

An equilibrium position is an index i such that the sum of elements before index i is equal to the sum of elements after index i.

Return the first equilibrium index (0-based indexing). If no such index exists, return -1.

?? Constraints
1 ? N ? 100
-1000 ? A[i] ? 1000
?? Input Format
The first line contains an integer N — the size of the array.
The second line contains N space-separated integers — the elements of the array.
??? Output Format
Print a single integer — the index of the first equilibrium position, or -1 if it does not exist.
*/
