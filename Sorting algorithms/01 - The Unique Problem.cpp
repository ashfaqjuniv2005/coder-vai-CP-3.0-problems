/*

01 - The Unique Problem

You are given a list of integers, and your task is to count how many numbers in the list are unique and occur exactly once throughout the entire array.

Input

The first input line has an integer n (1 <= n <= 106) , the size of the list of integers.

The second line has n integers x1, x2, x3, ..... , xn (1 <= xi <= 109)

Output

Print one integers: the number of unique values.

Example

Input
7

2 3 1 8 2 3 5

Output
3

*/

#include<bits/stdc++.h>
using namespace std; 
    #define pb push_back
    #define vi vector<int>
    #define  IO { ios_base::sync_with_stdio(false); cin.tie(0); }
    #define rip(i,n) for(int i=0;i<n;i++)
int main(){
    IO

    int n; cin>>n;
    vi a(n);
     rip(i,n) { cin>>a[i]; }
    sort(a.begin(),a.end());
    int unq=0;
    rip(i,n){
        if(a[i]==a[i-1]&&i>0) continue;
        if(i<n-1&&a[i]==a[i+1]) continue;
        unq++;
    }
    cout<<unq<<endl;
}
