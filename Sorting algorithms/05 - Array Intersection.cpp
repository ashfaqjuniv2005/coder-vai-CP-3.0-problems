/*

Consider two arrays, Array A and Array B. Your task is to find and identify the common elements between the two arrays, known as the intersection. In other words, you need to determine the values that appear in both Array A and Array B and provide them as the result in sorted order.

Input

First line will contain two integers, n and m: the sizes of the array A and B respectively. (1 <= n, m <= 106).

The second line will contain n integers of A. (1 <= Ai <= 109).

The last line will contain m integers of B. (1 <= Bi <= 109).

Output

Output the size of intersection in 1st line and the intersection in 2nd line.

Example

Input
7 10

5 1 2 9 4 2 5

2 2 3 3 1 5 6 8 9
Output
5
1 2 2 5 9

*/
#include<bits/stdc++.h>
using namespace std; 
    #define pb push_back
int main(){
    
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int idx1=0,idx2=0;
    vector<int>result;
   while(idx1<n&&idx2<m){
    if(a[idx1]==b[idx2]){
        result.pb(a[idx1]);
        idx1++;
        idx2++;
    }
    else if(a[idx1]<b[idx2]){
        idx1++;
    }
    else {
        idx2++;
    }
   }
   cout<<result.size()<<endl;
   for(int v:result) cout<<v<<" ";
   cout<<endl;
}
