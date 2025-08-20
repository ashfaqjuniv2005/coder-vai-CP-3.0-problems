/*

Given 3n contestants and their codeforces rating. We want form n teams of 3 contestants. The cost of formation of a team is the sum of pairwise difference between the rating of contestant in the team. 

For example, the cost of team with rating 1550, 1650 and 1780 is (|1550 - 1650| + |1650 - 1780| + |1550 - 1780| = 460. 

Find the minimum total of formation of n teams

Input

The first line will contain the value of n, the number of teams to be formed. (1 <= n <= 105).

The next line will contain 3n integers each indicating the rating of a contestant. (Rating <= 4000).

Output

Print a single integer indicating the minimum total cost of the formation of the teams.

Example

Input
4
1550 3580 2500 1600 1100 1500 1680 1910 2050 2250 1460 1250
Output
4320
*/

#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    int n; cin>>n;
    vector<int>arr(3*n);
    for(int i=0;i<3*n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int cost=0;
    for(int i=0;i<3*n;i+=3){
        cost += 2 * (arr[i+2] - arr[i]);
    }
    cout<<cost<<endl;
    return 0;
}
