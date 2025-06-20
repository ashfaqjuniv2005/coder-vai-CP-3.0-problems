/*
You are given the three co-ordinates of a triangle. You need to find the type of the triangle from the co-ordinates. 

Equilateral Triangle: All sides are equal in length.

Isosceles Triangle: Two sides are equal in length, and the third side is different.

Scalene Triangle: All sides are different in length.

Finally print the area and perimeter of the triangle rounded to 4 decimal places.

Input

Co-ordinate of first point x1, y1

Co-ordinate of second point x2, y2

Co-ordinate of third point x3, y3 

All values have absolute value less than 106.

Output

Output the type of the triangle in the first line.

In the second line output the area and perimeter (rounded to 4 decimal places).

Example

Input
0 0

0 3

4 0

Output
Scalene Triangle

6.0000 12.0000
    */

#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    long long x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    long long a=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    long long b=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
    long long c=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
    if(a==b && a==c){
        cout<<"Equilateral Triangle"<<endl;
    }
    else if(a==b||b==c||c==a){
        cout<<"Isosceles Triangle"<<endl;
    }
    else cout<<"Scalene Triangle"<<endl;
    double aa=sqrtl(a);
    double bb=sqrtl(b);
    double cc=sqrtl(c);
    
    double s=(aa+bb+cc)/2;

    double area=sqrtl(s*(s-aa)*(s-bb)*(s-cc));
    double perimeter=aa+bb+cc;
    cout<<fixed<<setprecision(4);
    cout<<area<<" "<<perimeter<<endl;
}
