#include<iostream>
using namespace std;	
#define ROW 3
#define COL 3
int main() {
	int arr1[ROW][COL] = { { 10,20,30 }, { 40,50,60 }, { 70,80,90 } };
	int arr2[ROW][COL] =  {10,20,30,40,50,60,70,80,90 };
	int arr3[ROW][COL];
	int count = 0;




	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			cout << "Address of arr1[" << count++ << "]=" << (long int)&arr1[i][j] << " Value = " << arr1[i][j] << endl;
		
            cout << "Address of arr2[" << count++ << "]=" << (long int)&arr2[i][j] << " Value = " << arr2[i][j] << endl; 
			

		}
	}
	return 0;
}