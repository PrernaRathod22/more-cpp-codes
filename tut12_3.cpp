/*
Write a program to use manipulators setw, setiosflags and setprecision for
formatted output.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 1000;

    cout << setw(10) << 44 << endl;
    cout << setw(10) << 333 << endl;
    cout << setw(10) << 2222 << endl;
    cout << setw(10) << 11111 << endl;

    cout << setprecision(5) << 1234.123456 << endl;

    cout << "Displaying setios functions " << hex << setiosflags(ios::showbase) << num;
    return 0;
}