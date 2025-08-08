/*
You will be given a bracket sequence, basically a string S consisting of only characters '(' or ')'.

You need to calculate the minimum number of additional bracket characters have to be added to make the string balanced. 

A balanced bracket sequence is a string consisting of only brackets, such that this sequence, when inserted certain numbers and mathematical operations, gives a valid mathematical expression.

Input

The only line of input consists of a string S which contains only '(' or ')'.

 1 <= |S| <= 105

Output

The only line of output contains the minimum insertion needed to make the string balanced. 
Input
(()))(((
OUTPUT
4

  */

#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    
     string s; cin>>s;
    stack<char>st;
    int ans=0;
    for(char c:s){
        if(c=='('){
            st.push(c);
        }
        else{
            if(st.empty()) ans++;
            else st.pop();
        }
    }
    ans+=st.size();
    cout<<ans<<endl;
    
}
