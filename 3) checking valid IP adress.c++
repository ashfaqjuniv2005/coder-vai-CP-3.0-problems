/*                                                   Checkig Valid IP addresses

A valid IP address consists of exactly four integers separated by single dots. Each integer is between 0 and 255 (inclusive) and cannot have leading zeros.

        For example, "0.1.2.201" and "192.168.1.1" are valid IP addresses, 

        but "0.011.255.245", "192.168.1.312" and "192.1681.1" are invalid IP addresses.

You will be given a string s and you need to check if the String s is a valid IP address or not.

Input

A string **S** that contains digits[0 - 9] and dots [.].

Output

output YES if its a valid IP address, otherwise print NO.
exmaple
Input

0.1.2.201

Output

YES

 */



#include<bits/stdc++.h>
using namespace std; 
int main() {
    string s; cin >> s;
    int n = s.size();
    int count=0;
    for(int i = 0; i < n; ) {
        int j = i; 
        int number = 0; 
        for(; j < n; j++) {
            if(s[j] == '.') break;
            number = number * 10 + (s[j] - '0');
            if(number > 255) {
                cout << "NO\n";
                return 0;
            }
        }
        i = j + 1;
        count++;
    }
    if(count == 4) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}
