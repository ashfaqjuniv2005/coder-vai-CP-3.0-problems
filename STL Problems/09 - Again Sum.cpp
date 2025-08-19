/*

This task is simple. You will be given the balance of n accounts. You have to find the sum of the balances where each balance is in range [L, R].

Input

The first line of the input contains n, the total number of bank accounts. 

The next line contains n integers the account balances.

The next line contains an integer q, which denotes the total number of queries to be asked next.

The next q lines each contains two integers L and R, meaning that you have to output the sum of the balances where each balance is between L and R.

1 <= n <= 105

1 <= balance <= 104

1 <= q <= 105

1 <= L <= R <= 105

Output

The q line of output contains the sum of the balances as mentioned above. 

 Example

Input
4

1 2 3 4  

3

4 5

2 6

5 6
output
4
9
0
*/

#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    vector<int> cumsum(n);
    for(int i = 0; i < n; i++) {
        if(i == 0) cumsum[i] = v[i];
        else cumsum[i] = cumsum[i - 1] + v[i];
    }
    int q; cin >> q;
    while(q--) {
        int l, r; cin >> l >> r;
        int up_pos = upper_bound(v.begin(), v.end(), r) - v.begin();
        int lo_pos = lower_bound(v.begin(), v.end(), l) - v.begin();
        up_pos--;
        lo_pos--;
        if(up_pos < 0) {
            cout << 0 << "\n";
            continue;
        }
        else {
            int ans = cumsum[up_pos];
            if(lo_pos >= 0) ans -= cumsum[lo_pos];
            cout << ans << "\n";
        }
    }
    return 0;
    
}
