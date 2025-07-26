/*Given an array of n integers. The task is to find 2 values (at different indices) whose sum is x. Print the position of the items if found (1 indexed). Print "IMPOSSIBLE" if there are no such indices.

For example, if the array is [2, 3, 5, 1, 7, 4, 6] and x = 13, the sum of items at position 5 and 7 are 7 and 6 whose sum is 13. So, the program should output "5 7".
It is guranted that at most one pair satisfies the given condition.

Input

The first line contains 2 integers n, the size of the array and x the required sum. (1 <= n <= 106)

The second line contains n integers representing the array a.

(1 <= ai <= 106) $ and ( 1 <= x <= 106)

Output

Print two integers, the positions of the values whose sum is x. If not found print "IMPOSSIBLE".

Example

Input

7 13

2 3 5 1 7 4 6

output
5 7
*/

#include <bits/stdc++.h>

#define pb             push_back
#define endl "\n" 
#define fill(x, y)     memset(x, y, sizeof(x))
#define all(x)         (x).begin(), (x).end()
#define debug(x)       { cerr << #x << " = " << x << endl; }
#define IO         { ios_base::sync_with_stdio(false); cin.tie(0); }
#define read(x)          freopen(x, "r", stdin)
#define write(x)       freopen(x, "w", stdout)

using namespace std;

typedef long long      ll;
typedef pair<int, int> ii;
typedef vector<int>    vi;

ll mp[1000005];

int main() {

    int n, x;
    cin >> n >> x;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (x>= arr[i] && mp[x - arr[i]] > 0)
        {
            cout << mp[x - arr[i]] << " " << i + 1 << endl;
            return 0;
        }
 
        mp[arr[i]] = i + 1;
    }
 
    cout << "IMPOSSIBLE" << "\n";
}
