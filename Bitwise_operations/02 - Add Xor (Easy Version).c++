/*

You will be given an integer n, and n elements. Also, you will be given an integer x. You need to output the summation after Xoring the value x with each array element.

Formally you need to output the value (a1 xor x) + (a2 xor x) + (a3 xor x) +........+ (an xor x)
Input

The first line of the input will contain two integers n and x. The next line will contain n elements of the array.

1 <= n <= 105

x <= 105

ai <= 105

Output

Output the above sum.

Example

Input
2 1

2 4
output
8


*/

#include<bits/stdc++.h>
using namespace std; 
    
int main(){
int n,x;
cin>>n>>x;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
long long sum=0;
    for(int i=0;i<n;i++){
   sum+=a[i]^x;
    }
    cout<<sum<<endl;
}
