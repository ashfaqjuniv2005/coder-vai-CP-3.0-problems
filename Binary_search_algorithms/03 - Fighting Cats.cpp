/*
Cats often fight amoung each other. In order to establish peace, you want to place them into stalls.

You have N cats and M stalls. The positions of the stalls are given. You have to place the cats into the stalls so that, the cats are as far away from each other as possible. That is, you have to maximize the minimum distance between any two cats.

Input

The number of cats N, the number of stalls M. (2 <= N <= M <= 106)

The next line contains M integers indicating the positions Ai of the stalls. (1 <= Ai <= 109) 

Output

The maximum value of the minimum distance between any two cats.

Example

Input
4 7
2 5 6 8 10 15 17
Output
4
*/
#include <bits/stdc++.h>

#define pb             push_back
#define endl "\n" 
#define fill(x, y)     memset(x, y, sizeof(x))
#define all(x)         (x).begin(), (x).end()
#define debug(x)       { cerr << #x << " = " << x << endl; }
#define IO	       { ios_base::sync_with_stdio(false); cin.tie(0); }
#define read(x)	       freopen(x, "r", stdin)
#define write(x)       freopen(x, "w", stdout)

using namespace std;

typedef long long      ll;
typedef pair<int, int> ii;
typedef vector<int>    vi;

bool check(int dist, int n, vi a) {
    int m = a.size();
    int placed = 1, lastPos = a[0];
    for (int i=1; i<m; i++) {
        if (a[i] - lastPos >= dist) {
            lastPos = a[i];
            placed++;
        }
    }
    return (placed >= n);
}

int main() {


    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    for (int i=0; i<m; i++) {
        cin >> a[i];
    }
    sort(all(a));
    int low = 0, high = 1e9;

    while(low < high) {
        int mid = (low + high + 1) / 2;
        if (check(mid, n, a)) {
            low = mid;
        } else {
            high = mid - 1;
        }
    }
    cout << low << endl;
}
