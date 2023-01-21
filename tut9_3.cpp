/*
Write a program to convert a basic type to a class type and vice versa
*/
#include <bits/stdc++.h>
using namespace std;
class TIME
{
    int hours, mins;

public:
    TIME() {}
    TIME(int t)
    {
        hours = t / 60;
        mins = t % 60;
        // display();
    }

    void display()
    {
        cout << "Hour is : " << hours << endl;
        cout << "Minutes is : " << mins << endl;
    }
};
int main()
{
    int x;
    cout << "Enetr a minuts : ";
    cin >> x;
    TIME t1(x);
    t1.display();
    return 0;
}