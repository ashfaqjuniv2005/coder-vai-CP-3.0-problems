/*

Write a program to check whether a given number is an Armstrong number or not.

An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

For example, 153 is an Armstrong number because 13 + 53 + 33 = 153.

Input

The number to be checked, n.

Output

Print "Yes" if the given number is an Armstrong number, else print "No".

Example

Input
8208
Output 
Yes

*/




#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(long long n) {
    long long m = n, sum = 0;
    int digits = log10(n) + 1;
    while (n > 0) {
        int d = n % 10;
        sum += pow(d, digits);
        n /= 10;
    }
    return sum == m;
}

int main() {
    long long n;
    cin >> n;
    if (isArmstrong(n)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
