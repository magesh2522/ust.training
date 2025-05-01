#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000];  
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> leaders;
    int maxRight = arr[n - 1];
    leaders.push_back(maxRight);

    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            leaders.push_back(maxRight);
        }
    }

    for (int i = leaders.size() - 1; i >= 0; --i) {
        cout << leaders[i] << " ";
    }

    cout << endl;
    return 0;
}


/*Q3. Given an array of positive integers. 
Your task is to find the leaders in the array. An element is leader if it is greater than all the elements to its right side.
And the rightmost element is always a leader.

Input Format:
The first line contains an integer, denoting the size of the array. 
The second line contains integers denoting the elements of the array.
 
Constraints
 1<= n<=100-1000<=arr[i]<= 1000, where arr is the ith  element of the array.
 Output Format:
 The output line prints all the leaders in the array.
 
TESTCASE 1:
 Input:
 6
 6 7 4 3 5 2
 Output: 
 2 5 7
 
TESTCASE 2:
 Input:
 5
 2 6 3 8 4 
 Output:
 4 8*/ //doubt//