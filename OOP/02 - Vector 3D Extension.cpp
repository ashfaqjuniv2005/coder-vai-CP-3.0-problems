/* 

Extend the previous Vector3D class by overloading the following operators:

Addition (+): adds two vectors
Subtraction (-): subtracts two vectors
Scalar multiplication (*): multiplies a vector by a scalar
Scalar division (/): divides a vector by a scalar
Equality (==): tests whether two vectors are equal
You will be given two 3D vectors and a scalar. Create objects of the Vector3D class and perform the following operations:

The first vector is a, the second one is b. And the scalar is c.

- Add the two vectors and print the resulting vector. (a + b)

- Subtract the two vectors and print the resulting vector. (a - b)

- Multiply the first vector by the scalar and print the resulting vector. (a * c)

- Divide the second vector by the scalar and print the resulting vector. (b / c)

- Test if the two resulting vectors are equal and print a message accordingly. (a * c == b / c)

Input

Six floating-point numbers separated by spaces: x1, y1, z1, x2, y2, z2 where -100 <= x1, y1, z1, x2, y2, z2 <= 100 representing the x, y, and z components of the first and second 3D vectors, and a floating-point scalar -100 <= s <= 100.

Output

- The sum of the two vectors: three floats separated by spaces and rounded to 4 decimal places

- The difference between the two vectors: three floats separated by spaces and rounded to 4 decimal places

- The result of multiplying one of the vectors by the scalar: three floats separated by spaces and rounded to 4 decimal places

- The result of dividing one of the vectors by the scalar: three floats separated by spaces and rounded to 4 decimal places

- "Equal" if the vectors are equal, "Unequal" otherwise

Example

Input
2 4 6

18 36 54

3
Output
20.0000 40.0000 60.0000

-16.0000 -32.0000 -48.0000

6.0000 12.0000 18.0000

6.0000 12.0000 18.0000

Equal

*/

#include<bits/stdc++.h>
using namespace std; 
    
class Vector3D {
public:
    double x, y, z;

    // Default constructor
    Vector3D() {
        x = 0;
        y = 0;
        z = 0;
    }

    // Constructor with three arguments
    Vector3D(double x_, double y_, double z_) {
        x = x_;
        y = y_;
        z = z_;
    }

    // Method to calculate magnitude of the vector
    double magnitude() {
        return sqrt(x*x + y*y + z*z);
    }

    // Method to normalize the vector
    Vector3D normalize() {
        double mag = magnitude();
        if (mag == 0) return Vector3D(x, y, z);
        double _x = x/mag;
        double _y = y/mag;
        double _z = z/mag;
        return Vector3D(_x, _y, _z);
    }

    // Method to calculate dot product with another vector
    double dot(Vector3D v) {
        return x*v.x + y*v.y + z*v.z;
    }

    // Method to calculate cross product with another vector
    Vector3D cross(Vector3D v) {
        double cx = y*v.z - z*v.y;
        double cy = z*v.x - x*v.z;
        double cz = x*v.y - y*v.x;
        return Vector3D(cx, cy, cz);
    }

    // Method to calculate angle between two vectors
    double angle(Vector3D v) {
        double dot_prod = dot(v);
        double mag_product = magnitude() * v.magnitude();
        return acos(dot_prod/mag_product) * 180.0 / M_PI;
    }

    // Overload addition operator
    Vector3D operator+ (const Vector3D& v) const {
        return Vector3D(x + v.x, y + v.y, z + v.z);
    }

    // Overload subtraction operator
    Vector3D operator- (const Vector3D& v) const {
        return Vector3D(x - v.x, y - v.y, z - v.z);
    }

    // Overload scalar multiplication operator
    Vector3D operator* (const double& s) const {
        return Vector3D(x * s, y * s, z * s);
    }

    // Overload scalar division operator
    Vector3D operator/ (const double& s) const {
        return Vector3D(x / s, y / s, z / s);
    }

    // Overload equality operator
    bool operator== (const Vector3D& v) const {
        return (x == v.x && y == v.y && z == v.z);
    }

};

int main() {

    double x1, y1, z1, x2, y2, z2, s;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> s;

    Vector3D a(x1, y1, z1), b(x2, y2, z2);

    Vector3D sum = a + b;
    Vector3D diff = a - b;
    Vector3D mul = a * s;
    Vector3D div = b / s;

    cout << fixed << setprecision(4);
    cout << sum.x << " " << sum.y << " " << sum.z << endl;
    cout << diff.x << " " << diff.y << " " << diff.z << endl;
    cout << mul.x << " " << mul.y << " " << mul.z << endl;
    cout << div.x << " " << div.y << " " << div.z << endl;

    if (mul == div) {
        cout << "Equal" << endl;
    } else {
        cout << "Unequal" << endl;
    }

    return 0;   
}
