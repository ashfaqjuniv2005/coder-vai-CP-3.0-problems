/*
You will be given a positive integer n. You need to check if n is a prime number or not.

A prime number is a number that is divisible only by 1 and itself.

Input

You will be given a positive integer n where 1 <= n <= 109.

Output

If n is a prime number, print "PRIME" (without quotes). Otherwise, print "NOT PRIME" (without quotes).

Example

Input
101
Output
PRIME
*/

#include<bits/stdc++.h>
using namespace std; 
   bool  numPrime(int n)
{
    if(n<2) return false;
    for(int i=2;i<=(n/2);i++)
    {
        if(n%i==0) return false;
    }


return true;
}

int main(){
int n; cin>>n;
    if (numPrime(n)) {
        cout << "PRIME" << endl;
    } else {
        cout << "NOT PRIME" << endl;
    }
}
