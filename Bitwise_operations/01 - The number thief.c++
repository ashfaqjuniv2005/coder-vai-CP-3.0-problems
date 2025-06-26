/*

Recently, the number of thieves have increased in wonderland.

You have a very large array of integers, and you have memorized the XOR of all the items in the array. A thief may have come the previous night and decreased one of the numbers in the array. Given the current state of the array and the XOR value you memorized before the thief came, determine if the thief actually came or not.

NB: The xor value was calculated before the Thief came. And the Thief can only reduce one number from the array.

For example:

Let the orginal array be : [1, 4, 5, 6]. (This is not given in the problem)

The xor value is 6. (This is given)

The Thief came and reduced 5 to 2.

The array now becomes : [1, 4, 2, 6] (This is given).

Now the xor value becomes 1. So, you are sure the Thief came.

Input

The xor value of the array, x;

The size of the array, n;

The current state of the array.

Output

Print "Thief" if the Thief came.

Else print "Relax".

Example

Input
6

5

1 4 2 5 7

output
Theif
*/

#include<bits/stdc++.h>
using namespace std; 
    
int main(){
int cur_xor;
cin>>cur_xor;
int n;  cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int new_xor=0;
for(int i=0;i<n;i++){
    new_xor^=a[i];
}
if(cur_xor==new_xor) cout<<"Relax"<<endl;
 else cout<<"Theif"<<endl;
    
}
