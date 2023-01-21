/*
Write a C++ program to demonstrate how parameters are passed to the base class
constructor via the derived class constructor
*/
#include <bits/stdc++.h>
using namespace std;
class base
{
public:
    int data1;
    base() {}
    base(int x)
    {
        data1 = x;
    }
};
class derived : public base
{
public:
    int data2;
    derived(int a, int y) : base(a)
    {
        data2 = y;
    }
    void show()
    {
        cout << "Base class data is " << data1 << "\nderived class data is " << data2 << endl;
    }
};
int main()
{
    derived d1(5, 8);
    d1.show();
    return 0;
}