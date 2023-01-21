/*
Write a program to implement single inheritance. Show the consequences of
deriving a class in public, protected and private manner with a simple example
*/
#include <bits/stdc++.h>
using namespace std;
class baseclass
{
private:
    int private_data_base;

protected:
    int protected_data_base;

public:
    int public_data_base;
    baseclass() {}
    baseclass(int a, int b, int c)
    {
        private_data_base = a;
        protected_data_base = b;
        public_data_base = c;
    }
};

class derived_class_1 : public baseclass
{
public:
    derived_class_1(int a, int b, int c)
    {
        // private_data_base = a;
        protected_data_base = b;
        public_data_base = c;
    }
    void display_public()
    {
        cout << "\npublic data " << public_data_base;
        cout << "\nprotected data " << protected_data_base;
        // cout << "\nprivate data " << private_data_base;
    }
};

class derived_class_2 : protected baseclass
{

public:
    derived_class_2(int a, int b, int c)
    {
        // private_data_base = a;
        protected_data_base = b;
        public_data_base = c;
    }
    void display_protected()
    {
        cout << "\npublic data " << public_data_base;
        cout << "\nprotected data " << protected_data_base;
        // cout << "\nprivate data " << private_data_base;
    }
};

class derived_class_3 : private baseclass
{

public:
    derived_class_3(int a, int b, int c)
    {
        // private_data_base = a;
        protected_data_base = b;
        public_data_base = c;
    }
    void display_private()
    {
        cout << "\npublic data " << public_data_base;
        cout << "\nprotected data " << protected_data_base;
        // cout << "\nprivate data " << private_data_base;
    }
};
int main()
{
    baseclass b1(1, 2, 3);
    derived_class_1 d1(4, 5, 6);
    derived_class_2 d2(7, 8, 9);
    derived_class_3 d3(10, 11, 12);
    d1.display_public();
    d2.display_protected();
    d3.display_private();
    // cout << d1.public_data_base << " " << d1.private_data_base << d1.protected_data_base; // only public data can access
    // cout << d2.public_data_base << " " << d2.private_data_base << d2.protected_data_base; // can't access a single data
    // cout << d3.public_data_base << " " << d3.private_data_base << d3.protected_data_base; // cant access a single data
    return 0;
}