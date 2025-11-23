/*
In a 3D space, there are 3 Points A, B, C. The 3D co-ordinates of the 3 points are given. Your task is to find the minimum distance between the point C and the line Segment AB. Output the distance rounding to 8 decimal places.

Input

The only line contains nine integers, the co-ordinates of A, B and C respectively.

ax, ay, az, bx, by, bz, cx, cy, cz

Output

A single number denoting the minimum distance(Rounded to 8 decimal places)

Example
Input
0 0 0 1 1 1 0 0 1

Output
0.81649658

*/

#include <bits/stdc++.h>

#define pb             push_back
#define endl "\n"
#define fill(x, y)    memset(x, y, sizeof(x))
#define all(x)        (x).begin(), (x).end()
#define debug(x)      { cerr << #x << " = " << x << endl; }
#define IO            { ios_base::sync_with_stdio(false); cin.tie(0); }
#define read(x)       freopen(x, "r", stdin)
#define write(x)      freopen(x, "w", stdout)

using namespace std;

typedef long long      ll;
typedef pair<int, int> ii;
typedef vector<int>    vi;

struct point {
  double x,y,z;
};


double sq(double a){
  return a*a;
}

double dist (point A, point B){
  double res = sq(A.x - B.x) + sq(A.y - B.y) + sq(A.z - B.z);
  return sqrt(res);
}

double bs(point A, point B, point C){
  if (dist(A, B) < 0.00000001) return dist(A, C);

  point mid;
  mid.x = (A.x + B.x)/2;mid.y = (A.y + B.y)/2;mid.z = (A.z + B.z)/2;

  if (dist(A, C) > dist(B, C)) return bs(mid , B, C);
  else return bs(A, mid, C);
}

void solve() {
  point a, b, c;
  cin >> a.x >> a.y >> a.z >> b.x >> b.y >> b.z >> c.x >> c.y >> c.z;

  cout << bs(a, b, c) << endl;
}

int main() {
  cout << fixed << setprecision(8);
  solve();
}
