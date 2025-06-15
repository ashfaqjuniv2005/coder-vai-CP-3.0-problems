/*
you will be given a String s, which can contain lowercase english letters ('a'- 'z'), spaces and commas(',') and a delimiter d.

You have to print the splitted string, writing each new word in a new line.

Suppose you have a string s = "i love cats,dogs", and d = ',' . Now you have to output the splitted strings. like this,

i love cats

dogs

Input

The first line of the input contains a the string s.

and the second line contains a character d.

Output

print all splitted string on a new line

Input
The first line of the input contains a the string s.

and the second line contains a character d.

output
print all splitted string on a new line



example
Input

i have cats,dogs,kitten

,

Output

i have cats

dogs

kitten

*/


#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    string s;
    getline(cin,s);
    string q;
    getline(cin,q);

    char delim=q[0];

    for (int i = 0; i < s.size();)
    {
        int j = i;
        string temp;

        for (; j < s.size(); j++)
        {
            if (s[j] == delim)
                break;
            temp.push_back(s[j]);
        }

        i = j + 1;
        cout << temp << "\n";
    }
}
