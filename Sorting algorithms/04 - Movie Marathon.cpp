// On a lazy Sunday afternoon, Alex and Bob decide to have a movie marathon. They have a collection of n movies that they want to watch. Each movie has a different duration.

// Alex and Bob start watching the movies in any order, without watching the same movie at the same time. What is the minimum total time they need to finish watching all the movies?

// Input

// The first line has an integer n, the number of movies.

// The second line contains n integers of array a representing the duration of each movie. (1 <= n <= 106, 1 <= ai <= 109).

// Output

// Print the minimum total time to watch all the movies.

// Example

// Input
  // 3
  // 10 4 5
  // output
  // 20

#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    long long n; cin>>n;
    vector<long long>a(n);
    long long sum=0,mx=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        mx=max(mx,a[i]);

    }
    if(sum-mx<=mx){
        cout<<2*mx<<endl;
    }
    else{
        cout<<sum<<endl;
    }
    return 0;
    
}
