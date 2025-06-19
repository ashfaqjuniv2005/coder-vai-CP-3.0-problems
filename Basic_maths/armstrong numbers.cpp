#include<bits/stdc++.h>
using namespace std; 
int count_digits(int n){
    int cnt=0;
    while(n){
        n/=10;
        cnt++;
    }
    return cnt;
}
bool is_Arm(int n){
    int temp=n;
    int cnt= count_digits(n);
    int sum=0;
    while(n){
        int d = n%10;
        sum += pow(d,cnt);
        n /= 10;
    }
    return sum==temp;
}
int main(){
   int n;
   cin>>n;
   if(is_Arm(n))
    cout<<"Yes"<<endl;
   else
    cout<<"No"<<endl;
    
}
