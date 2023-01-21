/*
Write a program to read a list containing item name, item code, and cost
interactively and produce a three-column output as shown below.

name code cost
*/
#include <bits/stdc++.h>
using namespace std;

class item
{
    string name;
    int code;
    float cost;

public:
    void set_data(string s, int c, float co)
    {
        name = s;
        code = c;
        cost = co;
    }
    void display()
    {
        cout.precision(2);
        cout.setf(ios::fixed, ios::floatfield);
        cout.setf(ios::showpoint);
        cout.setf(ios::left, ios::adjustfield);
        cout << setw(40) << name << code;
        cout.setf(ios::right, ios::adjustfield);
        cout << setw(15) << cost << endl;
    }
};
int main()
{
    item a[5];
    a[0].set_data("Tarbo C++", 1001, 250.95);
    a[1].set_data("C primer", 905, 95.7);
    a[2].set_data("algorithm", 1111, 120.5);
    a[3].set_data("principle of electronics", 2220, 150.85);
    a[4].set_data("solution of balagurusamy", 6666, 145.00);
    cout << setw(10) << "name" << setw(34) << "code" << setw(15) << "cost" << endl;
    for (int i = 0; i < 60; i++)
        cout << "-";
    cout << endl;
    for (int i = 0; i < 5; i++)
        a[i].display();
    return 0;
}