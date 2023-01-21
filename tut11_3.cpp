/*
Demonstrate the concept of “this” pointer in a class.
*/
#include <bits/stdc++.h>
using namespace std;

class Pointer
{
private:
    int data;

public:
    void setData(int x)
    {
        this->data = x;
    }
    void getData()
    {
        cout << "the data is " << data;
    }
};
int main()
{
    Pointer p1;
    p1.setData(5);
    p1.getData();
    return 0;
}