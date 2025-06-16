/*

The 3n + 1 problem is a mathematical statement that from any positive number, we can reach 1 by following the given move.

In each move,

If number is even, then divide it by 2 (n / 2)
If number is odd, then multiply it by 3 and add 1 (3*n + 1)
For example, if n = 22

22 -> 11 -> 34 -> 17 -> 52 -> 26 -> 13 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1

Given a starting number, print how many moves are required to reach 1. In case of 22, we need 15 moves to reach 1.

Input

The initial number, n.

0 <= n <= 105

Output

The number of moves required to reach 1.

Example

Input 22
output 15

*/


#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    int n,moves=0;
    cin>>n;
    while(n>1)
    {
        moves++;
        if(n%2==0)
        {
            n/=2;
        }
        else{
            n=3*n+1;
        }
    }
    cout<<moves<<endl;
}
