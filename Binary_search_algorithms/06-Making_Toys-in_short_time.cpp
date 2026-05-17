/*
A toy factory has N machines to make toys. Each machine works at different speeds. For each machine you know the no of seconds to make one toy. The machines work simultanously i.e paralelly. 

You want to make M toys. What is the minimum time to make M toys ? 

Input

The first line contains, N and M. (1 <= N <= 106), (1 <= M <= 109) 

The next line contains N integers A1, A2, ... , An. (1 <= Ai <= 109)

Output

Output a single integer indicating the minimum number of seconds to make M toys.

Example

Input
1
10 10

6 5 1 2 1 5 10 4 6 6

Output

4

*/


#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define Input  freopen("input.txt", "r", stdin);
#define Output freopen("output.txt", "w", stdout);

typedef vector<pair<int, int>> vpi;
typedef vector<vpi> vvpi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;

#define ppb pop_back
#define all(x) x.begin(), x.end()

#define rip1(i,a,b) for(ll i=a;i<b;i++)
#define rip2(i,a,b) for(int i=a;i<=b;i++)
#define rip3(i,a,b) for(int i=a;i>=b;i--)
#define rip4(i,a,b) for(int i=a;i>b;i--)
#define pb push_back
#define vi vector<int>
#define vll vector<long long>
#define tt int t;cin>>t;while(t--)
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mii map<int,int>
#define mll map<long long,long long>
#define empb emplace_back
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define Yes cout << "Yes" << endl; 
#define No cout <<"No"<< endl;
#define yes cout <<"YES"<< endl;
#define no cout << "NO" << endl;
#define pb push_back 
#define first_max LLONG_MAX
#define first_min LLONG_MIN
#define F first
#define S second
#define len(x) int((x).size())
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define sersort(v) sort(v.begin(),v.end());
#define rsort(v) sort(v.rbegin(),v.rend());
#define flip(v) reverse(v.begin(),v.end());
#define MOD 1000000007
#define INF 1e9+7
#define mp make_pair
#define fi first
#define se second


void solve(){
   ll n,k;
   cin>>n>>k;
    vll a(n);
    rip1(i,0,n) cin>>a[i];

   

    ll low = 0, high = 1000000000000000000;
    while(low<high){
     ll midpoint=(low+high)/2;
        ll ans=0;
         for(ll i=0;i<n&&ans<k;i++){
             ans+=(midpoint/a[i]);
         }
            if(ans<k){
                low=midpoint+1;
            }
            else high=midpoint;
    }

    cout<<low<<endl;
}


int main () {
fio
 
     tt solve();
   
    return 0;
}
