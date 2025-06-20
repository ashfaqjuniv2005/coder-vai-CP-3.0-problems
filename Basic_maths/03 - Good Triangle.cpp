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
