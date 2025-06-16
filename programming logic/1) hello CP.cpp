/*

Your task is very simple here. You will be given 2 integer numbers and an operator ('+' / '-' / '*') as an input. You have to print the result.

Input

The only line of input will be two integers a, b and an operator ch ('+', '*', '-').

1 <= a, b <= 10000

ch ∈ [ '+', '-', '*' ]

Output

Print the result.

Example

Input
4 10 +

 output
 14

*/

#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    
    int a,b;
    char c;
    cin>>a>>b;
    cin>>c;
    if(c=='+'){
        cout<<a+b<<endl;
    }
    else if(c=='*'){
        cout<<a*b<<endl;
    }
    else if(c=='-'){
        cout<<a-b<<endl;
    }
    return 0;
}
