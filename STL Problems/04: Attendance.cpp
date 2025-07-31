/*

You have to design a system for taking attendance in CP101 class. The system is like this: 

- You will be given n names, where each name represents a student of the class. 

- The first time a name s appears, it means he is now being registered and hence will be given a certain ID number. 

- The ID of a student is the number of studnets who have come before him, which means the ID system maintains chronological ordering. 

- Each of the next time the name s appears it means the teacher is calling the student named s, that is he needs to response by telling his roll number to his teacher. 

For example, Let n = 4 and the students name list is like the following, ["sachin", "sohaib", "sachin", "sohaib"]. Here when the first time name "sachin" appears he will be assigned an ID number which is zero because before him no student has come. The next name "sohaib" tells that a student

named "sohaib" has come and he should be given ID number = 1. The next name "sachin" means teacher calling the student named sachin and you have to now output his ID number, which is zero. 

Input

The first line of input contains an integer n, which is the size of the list of student names. 

Each of the next n lines contains a student name, s.

n <= 105

sum of all student's name length <= 105

Output

Output the ID number for each repeated strings as stated above. 

Example

Input
4

sachin

sohaib

sachin

sohaib

Output
0
1

*/

#include<bits/stdc++.h>
using namespace std;
 
 
int main(){

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

int n; cin>>n;
map<string,int>mp;
for(int i=0;i<n;i++){
    string name; cin>>name;
    if(mp.count(name)==0){
        mp[name]=mp.size();
    } else {
        cout<<mp[name]<<endl;
    }
  }
    return 0;
}
