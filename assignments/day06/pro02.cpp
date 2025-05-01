#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; 

    int sum = 0;      
    int product = 1;  

    while (N > 0) {
        int digit = N % 10;  
        sum += digit;        
        product *= digit;   
        N /= 10;             
    }

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;

    return 0;
}
/*1) write a program to read Sum and Product of digits in a given number

Input Format:
Read a positive integer N

Output Format:
Print the sum and product of digits of the number

Examples:
Input: N = 12
Output: 
sum =3 
product = 2.

Input: N = 1012
Output:
 Sum = 4 
product = 2
*/
