/*

In this problem, you will be given a vector containing n elements initially. 

You will be given q queries. Each query can be of 3 types. 

- Type 1: push an element v at the back of the vector.

- Type 2: Erase an element from position i. It is guaranteed that position i exists. Also, i will be 0 <= i < vector.size().

- Type 3: You will be given a certain position pos, where 0 <= pos < vector.size(), you have to calculate, how many i are there such that v[i] > v[pos].

Input

The first line of input will contain an integer n, where n <= 103

The next line will contain n integers. The initial elements of the vector.

Now it will contain an integer q, which means the amount of the query, where q <= 103

The next q lines will contain 2 integer in each line, The first one is type of the query which was mentioned above. 

The second one will be the index or value according to the mentioned procedure above. 

Output

For each type 3 query output a single integer, the number of inversion for the index given in input.

Example

Input
5
1 2 3 4 5
3
1 6
2 2
3 0
Output
4

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

int n; cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++) {
        cin>>a[i];
}
int q;
cin>>q;
for(int i=0;i<q;i++){
    int type ; cin>>type;
    int x; cin>>x;

    if(type==1){
            a.push_back(x);
    }
    if(type==2){
        a.erase(a.begin()+x);
    }
    else if(type==3){
            int cnt=0;
     for(int v:a){
        if(v > a[x]) cnt++;
     }
     cout<< cnt <<endl;
    }

}
return 0;
}
