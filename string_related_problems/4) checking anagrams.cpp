/*
Given two strings s and t, Print yes if t is an anagram of s, and no otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Input

Two strings **s** and **t** containing only lowercase latin letters ['a' - 'z']. 

Output

Output "yes" or "no" according to the condition stated above. 
example input
kamil
limak
output
YES
*/

#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    
    string s,t;
    cin>>s>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        cout<<"yes\n";
    }
    else{
        cout<<"no\n";
    }
}
