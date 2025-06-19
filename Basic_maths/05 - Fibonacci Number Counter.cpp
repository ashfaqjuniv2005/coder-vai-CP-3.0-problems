/*

You will be given an array of positive integers. Your task is to count how many of them are Fibonacci numbers.

The Fibonacci sequence is a sequence of numbers in which each number is the sum of the two preceding ones, starting from 0 and 1. That is, the first two numbers in the Fibonacci sequence are 0 and 1, and each subsequent number is the sum of the previous two.

Here are the first 10 Fibonacci numbers:

0, 1, 1, 2, 3, 5, 8, 13, 21, 34

Input

You will be given a positive integer k (where 1 <= k <= 100 ) indicating the number of integers in the set, followed by k positive integers separated by whitespace. The input integers will be between 1 and 109.

Output

Output the number of integers in the set that are Fibonacci numbers.

Example

Input
10

1 2 3 4 5 6 7 8 9 10

output
5

*/


#include<bits/stdc++.h>
using namespace std; 

long long fib[51];

int main(){
    
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<51;i++){
        fib[i]=fib[i-1]+fib[i-2];

    }
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        for(int j=0;j<51;j++){
            if(fib[j]==x){
                count++;
                break;
            }
        }
    }

    cout<<count<<endl;
}
