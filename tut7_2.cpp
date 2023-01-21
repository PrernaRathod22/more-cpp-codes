/*
Create a class complex that has two members of type float. Write a friend function
that calculate the sum of the two complex objects and returns the result as an object.
Demonstrate the working using a main function
*/
#include <bits/stdc++.h>
using namespace std;
class Complex
{
    float x, y;

public:
    Complex(float a, float b)
    {
        x = a;
        y = b;
    }
    Complex() {}
    friend Complex func(Complex o1, Complex o2);
    void display();
};
void Complex ::display()
{
    cout << "Value of x and y is " << x << " and " << y;
}
Complex func(Complex o1, Complex o2)
{
    Complex result;
    result.x = o1.x + o2.x;
    result.y = o1.y + o2.y;
    return result;
}
int main()
{
    Complex c1(6.36, 1.26), c2(4.25, 2.36), sum;
    sum = func(c1, c2);
    sum.display();
    return 0;
}