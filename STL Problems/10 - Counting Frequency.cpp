/*

You are given an array arr of n integers. And also q queries to be performed. 

Each query will be either of the following two types.

- Type 1: You have to insert an integer x to the array. 

- Type 2: You have to count how many numbers are in between L and R.

Input

The first line of input will contain integer n.

The next line will contain n integers which is the array we are working with. 

The next line will contain q the number of queries to be performed. 

The next q lines will contain 2 or 3 integer depending on the query types. 

The first of them will be a type which is either 1 or 2, if 1 then it means query type 1.

If type = 1 then the next integer will be a value x which we need to insert into the array. You don't need to consider the position where it should be insterted. 

You can think that it can be inserted anywhere.

If type = 2 then there will be two integers next L and R, denoting that you have to tell how many numbers y are there such that L <= y <= R 

1 <= n <= 105

1 <= arr[i] <= 109

1 <= q <= 105

1 <= x <= 109

1 <= L <= R <= 109

Output

For each type 2 query print the answer.

Example

Input
5

1 2 3 4 5

5

1 10

1 6

1 9

2 4 8

2 5 10
Output
3
4

*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace std;
#define getbit(n, i) (((n) & (1LL << (i))) != 0) 
#define setbit0(n, i) ((n) & (~(1LL << (i)))) 
#define setbit1(n, i) ((n) | (1LL << (i))) 
#define togglebit(n, i) ((n) ^ (1LL << (i))) 
#define lastone(n) ((n) & (-(n))) 
char gap = 32;
#define int long long
#define ll long long 
#define lll __int128_t
#define pb push_back
typedef tree<
pair<int, int>,
null_type,
less<pair<int, int>>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll hashPrime = 1610612741;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    ordered_set os;
    for(int i = 1; i <= n; i++) {
        int v; cin >> v;
        os.insert({v, i});
    }
    int cnt = n + 1;
    int q; cin >> q;
    while(q--) {
        int tp; cin >> tp;
        if(tp == 1) {
            int x; cin >> x;
            os.insert({x, cnt});
            cnt++;
        }
        else {
            int l, r; cin >> l >> r;
            int ans = os.order_of_key({r + 1, 0}) - os.order_of_key({l, 0});
            cout << ans << "\n";
        }
    }
    return 0;
}
