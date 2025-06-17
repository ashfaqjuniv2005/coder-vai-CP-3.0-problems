/*

The task is to print a triangle of the following format.

         *

        *.*

       *.*.*

      *.*.*.*

     *.*.*.*.* 

This is the triangle for N = 5.

Input

The number of lines or the height of the pyramid, N.

1 <= N <= 102

Output

Print a Pyramid of the mentioned format.

Example
Input 6
Output

     *
    *.*
   *.*.*
  *.*.*.*
 *.*.*.*.*
*.*.*.*.*.*

*/



#include<bits/stdc++.h>
using namespace std; 
    
int main() {

    int n; 
    cin >> n;

    for (int i=1; i<=n; i++) {
        int no_of_sym = 2*i - 1;
        int spaces = n - i;

        for (int k=1; k<=spaces; k++)
            cout << ' ';

        for (int j=1; j<=no_of_sym; j++) {
            if (j % 2 == 1) 
                cout << '*';
            else 
                cout << '.';
        }
        cout << endl;
    }
}
