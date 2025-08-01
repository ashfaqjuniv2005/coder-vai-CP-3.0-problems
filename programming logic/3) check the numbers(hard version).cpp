/*

You will be given a list of 'n' numbers. Can you tell when you received the maximum number? If you receive the maximum number multiple times, you have to output the earliest one.

Specifically you only need to output the index of the maximum number. Here index means 1 based ordering. Suppose I give you 3 numbers 5, 1, 6. Here if we consider 1 based indexing

then 5 has an index 1, 1 has an index 2 and 6 has an index 3.

Input

You will be given an integer n, the size of the input list. Then you will receive n numbers.

n <= 103

each number <= 103

Output

Tell the index of the maximum number, as stated above.

Example

Input
5
1 2 3 4 5
Output
5

*/


#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    
  int i,n;
  cin>>n;
  int arr[n+1];//1,...,n
  for(i=1;i<=n;i++)
   cin>>arr[i];

  int max_index=1;
  for(i=2;i<=n;i++){
    if(arr[i]>arr[max_index]){
        max_index=i;
    }
  }
  cout<<max_index<<endl;
}
