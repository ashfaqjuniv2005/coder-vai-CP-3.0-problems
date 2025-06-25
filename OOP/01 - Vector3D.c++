/*   

Create a class called Vector3D to represent a three-dimensional vector. The class should have the following member variables and methods:

Member variables

     x, y, z: floats representing the x, y, and z components of the vector

Methods

- constructor: a default constructor that initializes the vector to (0, 0, 0), and a constructor that takes three float arguments to set the x, y, and z components

- magnitude: returns the magnitude (length) of the vector (careful for division by 0)

- normalize: normalizes the vector (i.e., scales the vector to have a magnitude of 1)

- dot: returns the dot product of the vector with another vector

- cross: returns the cross product of the vector with another vector

- angle: returns the angle (in degrees) between the vector and another vector

You will be given two 3D vectors. Print the magnitude of both vectors, the normalized form of both vectors, the dot product of both vectors, the cross product of both vectors and the angle between both the vectors.

Input

Six floating-point numbers separated by spaces: x1, y1, z1, x2, y2, z2 where -100 <= x1, y1, z1, x2, y2, z2 <= 100 representing the x, y, and z components of the first and second 3D vectors.

Output

- The magnitude of the first vector: a float rounded to 4 decimal places (careful for division by 0)

- The magnitude of the second vector: a float rounded to 4 decimal places

- The normalized form of the first vector: three floats separated by spaces and rounded to 4 decimal places

- The normalized form of the second vector: three floats separated by spaces and rounded to 4 decimal places

- The dot product of the two vectors: a float rounded to 4 decimal places

- The cross product of the two vectors: three floats separated by spaces and rounded to 4 decimal places

- The angle (in degrees) between the two vectors: a float rounded to 4 decimal places

Example

Input
1 2 3

4 5 6
Output

3.7417

8.7750

0.2673 0.5345 0.8018

0.4558 0.5698 0.6838

32.0000

-3.0000 6.0000 -3.0000

12.9332

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
};

int main() {
 

    double x1, y1, z1, x2, y2, z2;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

    Vector3D v1(x1, y1, z1);
    Vector3D v2(x2, y2, z2);

    cout << fixed << setprecision(4);
    cout << v1.magnitude() << "\n";
    cout << v2.magnitude() << "\n";
    cout << v1.normalize().x << " " << v1.normalize().y << " " << v1.normalize().z << "\n";
    cout << v2.normalize().x << " " << v2.normalize().y << " " << v2.normalize().z << "\n";
    cout << v1.dot(v2) << "\n";

    Vector3D cross_product = v1.cross(v2);
    cout << cross_product.x << " " << cross_product.y << " " << cross_product.z << "\n";

    cout << v1.angle(v2) << "\n";

    return 0;
}
