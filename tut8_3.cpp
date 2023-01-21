/*
Design a class Polar which describes a point in the plane using polar coordinates
radius and angle. Use overloaded + operator to add two polar objects.

r=(r1+r2+2r1r2cos(ϕ2−ϕ1))1/2
*/
#include <bits/stdc++.h>
using namespace std;
class Polar
{
    float radius, angle;

public:
    Polar() {}
    Polar(float a1, float b1)
    {
        radius = a1;
        angle = b1;
    }
    Polar operator+(const Polar &obj)
    {
        Polar r3;
        double r1 = (radius * radius) + (obj.radius * obj.radius);
        double r2 = 2 * (radius) * (obj.radius) * (cos(angle - obj.angle));
        r3.radius = sqrt(r1 + r2);
        r3.angle = 56; // here we have to find formula to find added angle of two vector.
        return r3;
    }
    void display()
    {
        cout << "Radius is :" << radius << endl;
        cout << "Angle is :" << angle << endl;
    }
};
int main()
{
    Polar p1(3.8, 50.10), p2(2.5, 45.60);

    Polar p3 = p1 + p2;
    p3.display();
    return 0;
}