/*

Snakes have a DNA which can be represented by a string of uppercase letters. The DNA of a snake only contains the letters S, N, A, K, E.

The power of a snake can be determined from the DNA of the snake. The power of a snake is x if it's DNA contains a subsequence of x 'S' characters somewhere followed by x 'N' characters and so on.

For example a snake with power 3 will have 'SSSNNNAAAKKKEEE' in its DNA string a subsequence.

Given a DNA string, find the power of the snake.

Input

The only line contains the DNA string. The length of the DNA string is less than 105;

Output

Find the power of the snake.

Example

Input
KSEESNANNAAKNKESE
output
2

*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define vi vector<int>
#define testcases int t; cin>>t;while(t--)
#define infintetestcase ll t; cin>>t;while(t--)
#define vb vector<bool>
#define pgend return 0
#define YES cout<<"YES"<<"\n"
#define NO cout<<"No"<<"\n"
#define fr(i,n) for(int i=0;i<n;i++)
// check is b is a subsequence of a
bool isSubsequence(string &a, string &b){
int idx1=0,idx2=0;
while(idx1<a.size() and idx2<b.size()){
    if(a[idx1]==b[idx2]){
        idx1++;
        idx2++;
    }else {
    idx1++;
    }
  }
  return (idx2==b.size());

}
bool check(string &s, int power){
string pat= "";
for(int i=0;i<power;i++) pat.push_back('S');
for(int i=0;i<power;i++) pat.push_back('N');
for(int i=0;i<power;i++) pat.push_back('A');
for(int i=0;i<power;i++) pat.push_back('K');
for(int i=0;i<power;i++) pat.push_back('E');
return isSubsequence(s,pat);
}
int main(){
  optimize;

string s; cin>>s;
int lo=0,hi=s.size();
int mid;
while(hi-lo>1){
        mid=(lo+hi)/2;
    if(check(s,mid)){
        lo=mid;
    }
    else hi=mid;
}
cout<<lo<<endl;
  pgend;

}
