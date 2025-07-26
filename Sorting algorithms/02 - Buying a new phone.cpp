/*

There are n customers who want to buy new phones from a shop. Each customer has a specific budget, and the shop has m phones available with their respective prices. The customers also have a flexibility of k, meaning they are willing to consider phones that are priced within k units above or below their budget. Your task is to determine how many customers can buy a new phone from the shop.

Input

The first line of the input contains three integers n, m and k, representing the number of customers, the number of phones available in the shop, and the maximum allowed price difference ( 1 <= n, m <= 106 , 0 <= k <= 109 ).

The second line of the input contains n integers, representing the budgets of the customers.

The third line of the input contains m integers, representing the prices of the phones available in the shop.

Output

Print a single integer, which represents the number of customers who can afford to buy a new phone from the shop.

Example

Input
10 10 10

90 41 20 39 49 21 35 31 74 86

14 24 24 7 82 85 82 4 60 95
Output
6

*/


#include<bits/stdc++.h>
using namespace std; 
    #define vc vector<long long>
    #define ll long long
    #define rip(i,n) for(int i=0;i<n;i++)
    #define rop(i,m) for(int i=0;i<m;i++)
int main(){

    ll n,m,k; cin>>n>>m>>k;
    vc a(n),b(m);

   rip(i,n) cin>>a[i];
   rop(i,m) cin>>b[i];

   sort(a.begin(),a.end());
   sort(b.begin(),b.end());

    ll ptra = 0, ptrb = 0;
    ll cnt = 0;
 
    while (ptra < n and ptrb < m)
    {
        if (b[ptrb] + k < a[ptra])
        {
            ptrb++;
        }
        else if (a[ptra] + k < b[ptrb])
        {
            ptra++;
        }
        else
        {
            ptrb++;
            ptra++;
            cnt++;
        }
    }
    cout << cnt << endl;
}
