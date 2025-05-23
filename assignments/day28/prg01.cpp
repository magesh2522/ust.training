#include<iostream>
#define MAX 200
using namespace std;

class arrcal
{
private:
	int arr[MAX];
	int size = 5;
public:
	arrcal(int a[], int s)
	{
		for (int i = 0;i < s;i++)
		{
			arr[i] = a[i];
		}
		size = s;
	}
	int biggestArr()
	{
		int max = arr[0];
		for (int i = 0;i < 5;i++)
		{
			if (max < arr[i])
			{
				max = arr[i];
			}
		}
		return max;
	}

	void sortDescArr()
	{
		for (int i = 0;i < 5;i++)
		{
			for (int j = 0;j < 4;j++)
			{
				if (arr[j] > arr[j + 1])
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}

	}

	void sortAsc()
	{
		for (int i = 0;i < 5;i++)
		{
			for (int j = 0;j < 4;j++)
			{
				if (arr[j] < arr[j + 1])
				{
					int temp = arr[j + 1];
					arr[j + 1] = arr[j];
					arr[j] = temp;
				}
			}

		}
	}
	void disp()
	{
		for (int i = 0;i < size;i++)
		{
			cout << arr[i];
		}
	}
};

int main()
{
	int arr[50];

	cout << "Enter size";
	int size;
	cin >> size;
	for (int i = 0;i < size;i++)
	{
		cin >> arr[i];
	}
	arrcal ar(arr, size);
	ar.biggestArr();
	int maxx = ar.biggestArr();
	cout << maxx << endl;;
	ar.sortAsc();
	ar.disp();
	cout << endl;
	void sortDescArr();
	ar.disp();
}