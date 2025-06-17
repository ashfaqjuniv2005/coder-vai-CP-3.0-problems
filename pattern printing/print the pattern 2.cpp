/*

The task is to print a square of the following format.

*---*
|   |
|   |
|   |
*---*
This is the square for N = 5.

Input

The number of lines or the length of side of the pyramid, N.

3 <= N <= 102

Output

Print a square of the mentioned format.

Example
Input
10
Output

*--------*
|        |
|        |
|        |
|        |
|        |
|        |
|        |
|        |
*--------*


*/


#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    int n; 
    cin >> n;

    cout << '*';
    for (int i=1; i<=n-2; i++) 
        cout << '-';
    cout << '*' << endl;

    for (int i=1; i<=n-2; i++) {
        cout << '|';
        for (int i=1; i<=n-2; i++) {
            cout << ' ';
        }
        cout << '|' << endl;
    }
    cout << '*';
    for (int i=1; i<=n-2; i++) 
        cout << '-';
    cout << '*' << endl;
}
