/*
Create a class sample with members a and b of type integer. Write a friend function
that takes an object as argument and calculates the mean of the two members
*/
#include <bits/stdc++.h>
using namespace std;
class Sample
{
    int a, b;

public:
    Sample(int d, int e)
    {
        a = d;
        b = e;
    }
    void display()
    {
        cout << "va;ue of a and b is " << a << ", " << b << endl;
    }
    friend float avg(Sample o1);
};
float avg(Sample o1)
{
    float avg1 = (o1.a + o1.b) / 2;
    return avg1;
}
int main()
{
    Sample s(2, 58);
    float a = avg(s);
    cout << a;
    return 0;
}