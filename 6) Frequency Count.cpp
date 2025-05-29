/*  Given an array, A, find the frequency of each of its items.

For example,

A = [2, 3, 2, 1, 3, 4, 5, 9, 12]

Here, 2 and 3 occurs 2 times. Rest of the numbers occur only once.

Input=

The size of the array, n . 1 <= n <= 100000.

The items of the array, A[i] , 0 <= A[i] <= 100.

Output=

Print each number (ascending order) and its frequency seperated by space in a new line.

Input
9

2 3 2 1 3 4 5 9 12
output
1 1

2 2

3 2

4 1

5 1

9 1

12 1


   */

//solution=

#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int count [101]={0};
    for(int i=0;i<n;i++){
        count[a[i]]++;

    }
    for(int i=1;i<=100;i++){
        if(count[i]>0) cout<< i << " " << count[i] << endl;
    }
}



