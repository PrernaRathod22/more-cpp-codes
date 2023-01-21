/*
Write a program which contains two functions add (int, int) and subtract (int, int)
for adding and subtracting two integer values respectively. Use the concept of
pointer to function.
*/
#include <bits/stdc++.h>
using namespace std;
int add(int *x, int *y)
{
    *x = *x + *y;
    return *x;
}
int sub(int *x, int *y)
{
    *x = *x - *y;
    return *x;
}
int main()
{
    int x = 9, y = 2;
    add(&x, &y);
    // sub(&x, &y);
    cout << x << " " << y << endl;

    return 0;
}