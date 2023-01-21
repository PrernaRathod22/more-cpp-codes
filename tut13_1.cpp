/*
Write a C++ program to display largest among two numbers using function.
templates.
*/
#include <bits/stdc++.h>
using namespace std;
template <class T>
T func(T a, T b)
{
    if (a < b)
        return b;
    else
        return a;
}
int main()
{
    int i1, i2;

    cout << "Enter 2 integer : ";
    cin >> i1 >> i2;
    cout << "Larger number is " << func(i1, i2);

    float f1, f2;

    cout << "Enter 2 float value : ";
    cin >> f1 >> f2;
    cout << "Larger float number is " << func(f1, f2);

    char c1, c2;

    cout << "Enter 2 character : ";
    cin >> c1 >> c2;
    cout << "Larger ASCII value is " << func(c1, c2);

    return 0;
}