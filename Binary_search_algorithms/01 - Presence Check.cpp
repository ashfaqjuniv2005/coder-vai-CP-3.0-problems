/*
You are given a list of integers and a number of queries. Your task is to determine whether each queried number is present in the list.

Input

The first input line contains an integer n (1 <= n <= 106), representing the size of the list of integers.

The second line contains n integers x1, x2, x3, ....., xn (1 <= xi <= 109), representing the elements of the list.

The third line contains an integer q (1 <= q <= 106), representing the number of queries.

The next q lines contain a single integer each, representing the queried numbers y1, y2, y3, ......, yq (1 <= yi <= 109).

Output

Print q lines, where each line contains either "YES" if the corresponding queried number is present in the list, or "NO" if it is not.

Example

Input
6

2 4 6 8 10 12

3

4

7

12
Output
YES

NO

YES
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a.begin() + 1, a.end());

    int q;
    cin >> q;

    while (q--) {
        int search_value;
        cin >> search_value;

        int start = 1, finish = n; 

        while (start <= finish) {
            int mid = (start + finish) / 2;
            if (a[mid] == search_value) {
                cout << "YES\n";
                goto next_query; 
            }
            else if (a[mid] < search_value) {
                start = mid + 1;
            }
            else {
                finish = mid - 1;
            }
        }

        cout << "NO\n";

        next_query:;
    }

    return 0;
}
