/*
A permutation of first n natural numbers is an array of numbers from 1 to n, arranged in any order that no number appears twice in the array.

You need to generate all possible permutation of first n numbers, and output them from lexicographically smallest to biggest.

Input

The only line of input consists of one integer n, where 1 <= n <= 8

Output

Output all the permutations of numbers from 1 to n according to the above stated manner.

Example

Input
3
Output
1 2 3
1 3 2
2 1 3
2 3 1
3 2 1
3 1 2

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ttc ll t;cin>>t; while(t--)
#define vll vector<long long>
#define vi vector<int>
#define rip(i,n) for(int i=0;i<n;i++)
#define YES cout<<"YES"<<"\n"
#define NO cout<<"NO"<<"\n"
#define pb push_back
#define ppb pop_back

int used[101];
int n;

void solve(vi &v,int pos){
if(pos>n){
    for(auto x:v) cout<<x<<" ";
    cout<<"\n";
    return ;
}
for(int i=1;i<=n;i++){
    if(used[i]) continue;
    used[i]=1;
    v.pb(i);
    solve(v,pos+1);
    v.ppb();
    used[i]=0;
}

}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

cin>>n;
vi v;
solve(v,1);
return 0;

}
