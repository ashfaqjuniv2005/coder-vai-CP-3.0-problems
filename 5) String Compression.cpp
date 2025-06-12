/*
Practice Problem 05: String Compression
Problem

Editorial

Submissions

You will be given a string s consisting of lowercase lattin letters ['a' - 'z']. You need to compress the String using the following rules. 

  - You need to replace each block of consecutive equal characters by the character following by the length of the block

  - Example Suppose you have a string = "aabbcccd" your output string will be "a2b2c3d1"

  - Here the output means there is 2 a's, 2 b's, 3 c's and 1 d consecutively standing one after another in the main input string.  

Input

A string s consisting of lowercase english letters ['a' - 'z']

1 <= |s| <= 1e5

  

Output

The modified string as stated above. 
Input
aaabbbcdddd
output
a3b3c1d4
*/



#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;){
        int j=i;
        for( ;j<n;j++){
            if(s[j]!=s[i]) break;

        }
        int len=j-i;
        cout<<s[i]<<len;
        i=j;
    }
    cout<<endl;
}
