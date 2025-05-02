#include <iostream>

using namespace std;	

#define SIZE 30
int find(int*, int);

int main()
{

	int arr[SIZE];

	int size;
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	int result = find(arr, size);
	cout << result << endl;

}

int find(int* arr, int size)
{
	int sum;

	for (int i = 0; i < size; i++)
		sum = sum ^ arr[i];

	return sum;
}
/* 02 You are given a sorted array A of size N containing integers. Every element in the array appears exactly twice, except for one element that appears only once. Your task is to find and print that unique element.

📌 Constraints
The array is sorted in non-decreasing order.
1 ≤ N ≤ 10^5 (N is always odd)
if possible try to solve considering bellow 2 conditions
Time Complexity: O(N)
Do not use extra memory (i.e., no additional data structures like hash maps, sets, or arrays)
🧾 Input Format
The first line contains an integer N — the number of elements in the array.
The second line contains N space-separated integers — the elements of the array.
🖨️ Output Format
Print the unique element that appears only once.*/