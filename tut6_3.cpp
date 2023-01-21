/*
Write a program to demonstrate the use of copy constructor.
*/
#include <bits/stdc++.h>
using namespace std;
class myclass
{
    int data;

public:
    myclass()
    {
        data = 0;
        cout << "This is a default constructor with data." << data << endl;
    }
    myclass(int a)
    {
        data = a;
        cout << "This is a constructor with data." << data << endl;
    }
    myclass(myclass &a)
    {
        data = a.data;
        cout << "This is a copy constructor with data." << data << endl;
    }
};
int main()
{
    myclass m1, m2(5);
    myclass m3(m2);
    return 0;
}