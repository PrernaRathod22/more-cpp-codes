/*
Write a program to overload the + and == operators for the string class.
*/
#include <bits/stdc++.h>
using namespace std;
class Overload
{
    string a, b;

public:
    Overload() {}
    Overload(string a1, string b1)
    {
        a = a1;
        b = b1;
    }
    Overload operator+(const Overload &obj)
    {
        Overload result;
        result.a = a + obj.a;
        result.b = b + obj.b;
        return result;
    }
    bool operator==(const Overload &obj1)
    {
        if (a == obj1.a || b == obj1.b)
            return true;
        else
            return false;
    }
    void display()
    {
        cout << "string a is :" << a << endl;
        cout << "string b is :" << b << endl;
    }
};
int main()
{
    Overload o1("jemish", "khunt"), o2("moni", "khunt");
    bool result = o1 == o2;
    Overload o3 = o1 + o2;
    o3.display();
    cout << "Both string are " << result;
    return 0;
}