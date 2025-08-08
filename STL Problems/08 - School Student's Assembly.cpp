
/*
ACS group is arranging an assembly today infront of their campus. You are asked to make a simulator for their system. 

Basically you will be given q operations. In each query either you have to enter a new student in the queue or remove an existing one. 

Each query will be of 2 types. 

- Type 1: You will be given two integers pos, ID. Here pos can be either 0 or 1. 0 means the student with id number ID enters at the beginning of the queue, and 1 means the opposite.

- Type 2: You will be given a single integer pos. Here if pos is 0 then you have to remove the first student from the front, else you have to remove the first student from the back.

You have to output the resulting queue after all those operations. If the queue is empty then you can print an empty line.

Input

The first line of the input contains an integer q, the number of operations. 

The next q lines will contain the operations. 

Each operation first begins with a type value. If the type value is 1 then it means the first type, else the second.

Each type = 1 operations will contain two integers, pos, ID. Each of them have the respective meaning stated above.

Each type = 1 operations will contain a single integer pos.

1 <= q <= 105

1 <= ID <= 105

Output

Output a single line containing the resulting queue after all q operations are done.

Example
Input
5

1 0 1

1 0 2

1 1 3

2 0

2 1
Output
1

  */


#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    int q; cin >> q;
    deque<int> dq;
    for(int i = 1; i <= q; i++) {
        int tp; cin >> tp;
        if(tp == 1) {
            int pos, id; cin >> pos >> id;
            if(pos == 0) {
                dq.push_front(id);
            }
            else {
                dq.push_back(id);
            }
        }
        else {
            int pos; cin >> pos; 
            if(pos == 0) dq.pop_front();
            else dq.pop_back();
        }
    }
    for(auto x: dq) cout << x << " ";
    cout << "\n";
    return 0;
}
