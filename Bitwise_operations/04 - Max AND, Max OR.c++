/*

You will be given an integer n, and n elements of an array. You need to find the maximum AND value and maximum OR value of a subsequence of the array.

Note that your findings will be independent, meaning that the subsequence which gives the maximum value for AND doesn't necessarily be the subsequence which gives the maximum OR value.

Input

The first line of the input will be an integer n <= 105, which is the size of the array.

The second line will contain n array elements, elements <= 105

Output

Print Maximum AND value and OR value in a new line. Please see the sample IO for correct format.

Example

Input
3
1 2 3 

output
3 3

*/


#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max_element=0;
    int or_result=0;
    for(int i=0;i<n;i++){
        max_element=max(max_element,a[i]);
        or_result|=a[i];
            }

    cout  << max_element<<" " << or_result <<endl;
    
}
