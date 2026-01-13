/*
Task is very simple. You will be be given a integer n and you have to output the n-th fibonacci number. 

Remember the first three fibonacci numbers are 1, 1, 2.

You can use the relation F(n) = F(n - 1) + F(n - 2).

Input

The only line of input contains a integer n, wnere 1 <= n <= 25.

Output

Output the n-th fibonacci.

Example

Input
8
Output
21

*/

#include<bits/stdc++.h>
using namespace std; 
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int fibo(int n){
    if(n==0) return 1;
    else if(n<=2) return 1;
    else return fibo(n-1)+fibo(n-2);
}

int main(){
    optimize();
    int n;cin>>n;
    cout<<fibo(n)<<"\n";

  return 0;
}
