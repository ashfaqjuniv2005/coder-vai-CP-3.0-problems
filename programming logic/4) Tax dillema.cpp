/*
Alex is a business man in Wonderland . He is recently worried about his taxes.

The tax system of Wonderland is as follows. The tax system has 3 tiers.

  Income <= 50000, the tax rate is 10%
  50000 < Income <= 100000, the tax rate is 20%
  Income > 100000, the tax rate is 30%
For example, let's say Alex earns $75000.

* On the first $50000, 10% tax rate will be applied.

* On the remaining $25000, 20% tax rate will be applied.

So, total tax = 10% * 50000 + 20% * 25000 = 10000

Alex wants you to write a program to calculate his taxes. It is guaranteed that the payable tax will be an integer.

Input

A positive integer, n, indicates the income of Alex.

Alex's income is always a multiple of 10.

1 <= n <= 109

Output

Output the total payable tax of Alex.

Example

Input 
7500
output
10000
*/

#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    int income;
    cin >> income;
    int tax = 0;
    if (income > 100000)
    {
        tax += (income - 100000) * 0.3;
        income = 100000;
    }
    if (income > 50000)
    {
        tax += (income - 50000) * 0.2;
        income = 50000;
    }
    tax += income * 0.1;
    cout << tax << endl;
}
