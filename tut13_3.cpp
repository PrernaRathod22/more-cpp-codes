/*
Write a C++ program to add, subtract, multiply and divide two numbers using class
template.
*/
#include <bits/stdc++.h>
using namespace std;
template <class T>
class calculate
{
    T a1, a2;

public:
    calculate(T a, T b)
    {
        a1 = a;
        a2 = b;
    }
    T add()
    {
        return a1 + a2;
    }
    T substraction()
    {
        return a1 - a2;
    }
    T multiply()
    {
        return a1 * a2;
    }
    T divide()
    {
        return a1 / a2;
    }
};
int main()
{
    calculate<int> c1(2, 3);
    cout << "Addition is " << c1.add();
    cout << "\nSubstration is " << c1.substraction();
    cout << "\nMultiplication is " << c1.multiply();
    cout << "\ndivision is " << c1.divide();
    return 0;
}