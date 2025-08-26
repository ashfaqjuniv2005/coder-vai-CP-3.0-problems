/*
You are the ruler of a prestigious country. Your country is located at position (0, 0) and has a population K.

You are not happy with such small population, hence you want to conquer other countries at different locations to increase your population to M. Conquering a country will add its population to yours. But going too far from your country might result in a lost battle. You don't want to lose. So, you will only conquer countries with less than r distance from your country (0, 0).

What is the minimum value of r to reach a population of M?

Input

The first line contains N, the number of other countries, K, the current population of your country and M the population you want to reach.

1 <= N <= 106 , 1 <= K <= M <= 109

The next N lines contain xi, yi , the position of ith country and mi, its population.

-108 <= xi, yi <= 108 ; 1 <= mi <= 109

Output

Output the minimum distance r to reach population M rounded to 4 decimal places.

If its impossible to reach M population, print "IMPOSSIBLE".

Example

Input
4 10 100

3 4 70

-12 -8 10

-4 -12 25

6 8 50
Output
10.0000
*/

#include <bits/stdc++.h>

#define pb             push_back
#define endl "\n" 

#define all(x)         (x).begin(), (x).end()

#define IO	       { ios_base::sync_with_stdio(false); cin.tie(0); }


using namespace std;

typedef long long      ll;
typedef pair<ll, int> ii;
typedef vector<int>    vi;


int main() {



    ll n, k, m;
    cin >> n >> k >> m;

    vector<ii> arr; 
    for (int i=0; i<n; i++) {
        ll x, y, m;
        cin >> x >> y >> m;

        arr.push_back({x*x + y*y, m});
    }
    sort(all(arr));
    
    ll current_population = k;
    ll max_dist = 0;
    int idx = 0;
    while(current_population < m and idx < n) {
        current_population += arr[idx].second;
        max_dist = arr[idx].first;
        idx++;
    }
    if (current_population >= m) {
        double r = sqrt(max_dist);
        cout << fixed << setprecision(4);
        cout << r << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }
}
