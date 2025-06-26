/*

You will be given an integer n, which is the size of an array and n elements of the array.

Suppose there is an integer x(x < 231). We first calculate the xor value of x and each array element and then sum them up. You need to find such x which will maximize the value of the summation.

You need the print the maximum value of summation with all possible x.

Input

The first line of the input will contain integer n, n <= 105

The next line will contain n array elements. ai <= 105

Output

Print the maximum sum value.

Example

Input
5

1 2 3 4 5

Output

10737418221

*/


#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long  max_sum=0;
    x=0;
   for(int j=0;j<31;j++){
    int count0=0;
    int count1=0;
    for(int i=0;i<n;i++){
    if((a[i]>>j)&1) count1++;
    else count0++;
   }
   if(count0>count1){
    x |= (1 << j);
   }
    
   }
   for(int i=0;i<n;i++){
    max_sum+=(a[i]^x);
   }
   cout<<max_sum<<endl;
}
