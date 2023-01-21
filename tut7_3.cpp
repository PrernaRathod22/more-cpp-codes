/*
Write a C++ program to implement function overloading in order to compute
power(m,n) where (1) m is double and n is int (2) m and n are int
*/
#include <bits/stdc++.h>
using namespace std;
class overloading
{
public:
    friend double overloading(int m, int n);
    friend double overloading(double m, int n);
};
double overloading(int m, int n)
{
    double ans = pow(m, n);
    return ans;
}
double overloading(double m, int n)
{
    double ans = pow(m, n);
    return ans;
}
int main()
{
    cout << overloading(2, 3) << endl;
    cout << overloading(2.2, 3);
    return 0;
}