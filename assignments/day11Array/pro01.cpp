#include <iostream>
#include <unordered_map>
using namespace std;

void findSubArrayWithPrefixSum(int arr[], int n, int targetSum) {
    unordered_map<int, int> prefixSumMap; 
    int currentSum = 0;

    for (int i = 0; i < n; ++i) {
        currentSum += arr[i];

        if (currentSum == targetSum) {
            cout << "Sum found between indexes 0 and " << i << endl;
            return;
        }

        if (prefixSumMap.find(currentSum - targetSum) != prefixSumMap.end()) {
            cout << "Sum found between indexes "
                << prefixSumMap[currentSum - targetSum] + 1 << " and " << i << endl;
            return;
        }

        prefixSumMap[currentSum] = i;
    }

    cout << "No subarray found" << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    }
/*Q1.
Problem Statement:
Given an unsorted array a of size N of non-negative integers, 
find a continuous sub-array which adds to a given number sum.

Input Format:
The first line contains an integer, denoting the size of the array. 
The second line contains integers denoting the elements 
of the array.
The last line contains an integer, denoting the sum. 

Constraints
1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.
1<= n<=100000

Output Format:
The output line contains integers denoting the indexes.

TESTCASE 1:
Input:
7
[1, 4, 0, 0, 3, 10, 5]

sum = 7
Output: 
Sum found between indexes 1 and 4

TESTCASE 2:
Input:
2
[1, 4]
sum = 0
Output: 
No subarray found*/