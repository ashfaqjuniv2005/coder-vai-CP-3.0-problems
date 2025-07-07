/*

You will be given n student names. You have to assign a roll number to each student according to their name. 

Basically you need to sort the student's name list and then assign them a roll number according to their name's position in the list.

[Hint: Use a vector to store the name list and then give a roll number to each of them]

It is guaranted that each name will be distinct.

Input

The first line of the input will contain an integer n denoting the number of the students in the class room.

The next n lines will contain n distinct string, each denoting their name. 

1 <= n <= 105

sum of |s| <= 105

Output

Output n integers, where i-th number will tell the roll number of the i-th student.

Example

Input
3

aa

bb

ab
output
1 
3 
2

*/


#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    
    vector<string> v;
    
    int res[n + 1];
    
    vector<pair<string, int>> calc;
    
    for(int i = 1; i <= n; i++) {
        string s; cin >> s;
        v.push_back(s);
        calc.push_back({s, i});
    }
    
    sort(calc.begin(), calc.end());
    
    for(int i = 0; i < n; i++) {
        res[calc[i].second] = i + 1;
    }

    for(int i = 1; i <= n; i++) {
        cout << res[i];
        cout << "\n";
    }
    return 0;
}
