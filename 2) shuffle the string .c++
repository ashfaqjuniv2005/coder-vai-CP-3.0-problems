/* 
You are given a string s and an integer array indices of the same length. The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string. 

print the shuffled string.

Input

The first line of input contains a string s 

The next line of the input contains an array indices, whose length is equal to the string's length. 1 <= indices[i] <= |s| 

It is guaranteed that indices array is a permutation of numbers from 1 to n. ie. all number in range from 1 to n occurs exactly once.

Output

Print the shuffled string

input
love

4 2 1 3

output
voel
*/

#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    string s;
    cin>>s;
    int n=s.size();
    string newString(n,'.');
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        newString[arr[i]-1]=s[i];
    }
    cout<<newString<<endl;
}
