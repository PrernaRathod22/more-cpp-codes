/*
Define two classes Polar and Rectangle to represent points in the POLAR and
rectangular systems. Use conversion routines to convert from one system to the
other.
*/
#include <bits/stdc++.h>
using namespace std;
class rectangle
{
public:
    float x_co1, y_co1;
    rectangle() {}
    rectangle(float x, float y)
    {
        x_co1 = x;
        y_co1 = y;
    }
    void display()
    {
        cout << "\n X and Y-axis of rectamgle is : " << x_co1 << " " << y_co1;
    }
};
class POLAR
{
public:
    float x_co2, y_co2;
    POLAR() {}
    POLAR(float x, float y)
    {
        x_co2 = x;
        y_co2 = y;
    }
    void display()
    {
        cout << "\n X and Y-axis of polar point is : " << x_co2 << " " << y_co2;
    }
};
rectangle convert_p(POLAR a)
{
    rectangle r;
    r.x_co1 = a.x_co2;
    r.y_co1 = a.y_co2;
    return r;
}

POLAR convert_r(rectangle a)
{
    POLAR r;
    r.x_co2 = a.x_co1;
    r.y_co2 = a.y_co1;
    return r;
}

int main()
{
    rectangle r1(1.25, 2.25);
    POLAR p1(4.23, 5.23);
    rectangle r2;
    POLAR p2;
    p2 = convert_r(r1);
    r2 = convert_p(p1);
    r2.display();
    p2.display();
    return 0;
}