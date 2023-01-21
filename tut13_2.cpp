/*
Write a C++ program to swap data using function templates.
*/
#include <bits/stdc++.h>
using namespace std;

template <class T>
void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int i1, i2;

    cout << "Enter 2 integer : ";
    cin >> i1 >> i2;
    Swap(i1, i2);
    cout << i1 << " " << i2;

    float f1, f2;
    cout << "Enter 2 float value : ";
    cin >> f1 >> f2;
    Swap(f1, f2);
    cout << f1 << " " << f2;

    char c1, c2;
    cout << "Enter 2 character : ";
    cin >> c1 >> c2;
    Swap(c1, c2);
    cout << c1 << " " << c2;

    return 0;
}