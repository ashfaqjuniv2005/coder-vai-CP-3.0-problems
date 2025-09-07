/*
You have arranged a party and N guests have arrived. Now you have two different types of cake, a red cake and a blue cake. You have divided the red cake in x pieces and the blue cake into y pieces.

You have to distribute the pieces to N guests such that, each guests gets at least one piece of cake and no guest gets both red and blue cake. So, each guest either gets red cake pieces or blue cake pieces.

Now, if a guest gets only few pieces it will be shameful. So, you want to make sure that each guest gets atleast z pieces of cake. What is the maximum value of z using the above policy ?

Input

Three integers N, x, y.

1 <= N, x, y <= 109, N <= x + y  

Output

Output a single integer x, such that each guest gets at least x peices of cake and x is maximum.

Example

Input
4 11 18
Output
6
*/
#include<bits/stdc++.h>
using namespace std;

#define optimize ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define vi vector<int>
#define testcases int t; cin>>t;while(t--)
#define infintetestcase ll t; cin>>t;while(t--)
#define ll long long
#define pgend return 0
#define YES cout<<"YES"<<"\n"
#define NO cout<<"No"<<"\n"
#define fr(i,n) for(int i=0;i<n;i++)

int howManyGuestsSerrved(ll x,ll y,ll z){
return (x/z)+(y/z);
}
int main(){
  optimize;
ll n,x,y; cin>>n>>x>>y;
ll l=1,r=x+y+1;
while(r-l>1){
    ll mid=(l+r)/2;
    if(howManyGuestsSerrved(x,y,mid)>=n) l=mid;
    else r=mid;
}
cout<<l<<"\n";

  pgend;

}
