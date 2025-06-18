/*

You will be given a quadratic equation ax2 + bx + c . You need to find the nature of the roots. And print the roots if they are real.

There are 3 types of roots:

Imaginary
Real and Equal
Real and Unequal
Input

You will be given the values of a, b and c.

0 <=a, b, c <=10000 and a <= 0

Output

In the first line, print the nature of the roots. Then print the values of roots in the second line (Rounded to 2 decimal places).

If the roots are imaginary you don't need to print them.

If the roots are equal, print it only once.

If the roots are unequal, print the smaller one first.

Example

Input 1 -2 1
Output
Real and Equal

1.00

*/





#include<bits/stdc++.h>
using namespace std; 
const double eps = 1e-9;
    
int main(){
    double a,b,c;
    cin>>a>>b>>c;

    double disc = b*b-4*a*c;

    cout << fixed << setprecision(2);
    
    if(disc<0){
        cout<< "Imaginary" <<endl;
        
    }
    else if(disc==0){
        cout<<"Real and Equal"<<endl;
        double root = -b/(2.0*a);
        cout<<root+eps<<endl;
    }
    else {
        cout<<"Real and Unequal" <<endl;
        double s=sqrt(disc);
        double root1=(-b+s)/(2.0*a);
        double root2=(-b-s)/(2.0*a);
        cout<<min(root1,root2)<<" "<<max(root1,root2)<<endl;


    }
    
}
