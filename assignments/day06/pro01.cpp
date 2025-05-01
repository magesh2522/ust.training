#include <iostream>
using namespace std;

int countWays(int n) {
    int count = 0;
    for (int a = 1; a <= n; ++a) {
        for (int b = a; b <= n; ++b) {
            for (int c = b; c <= n; ++c) {
                int d = n - (a + b + c);
                if (d >= c) {
                    ++count;
                }
            }
        }
    }
    return count;
}

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int n;
        cin >> n;
        cout << countWays(n) << endl; 
    }

    return 0;
}
/*
2) Write a program to Count number of ways to divide a number
 in 4 parts.

 Input Format:
 First Line Of Input Contains T test cases
 Second line of Input Contains a positive integer n,

 Output Format:
 Print the count number of ways for divison can take place.

 Examples :

 Input:
 1
   5 => 1 + 1 + 1 + 2

 Output: 1

 Input:
 1
 6
   2 + 2 + 1 + 1
   1 + 1 + 1 + 3
 Output: 2

 Input:
 
   8
 Output: 5
1+1+1+5
2+2+2+2
2+2+1+3
1+1+2+4
3+3+1+1*////i'm having doupt about the output*/
