/*
Write a C++ program to create constructor to allocate memory dynamically and
read a string value. Create a Display () function to display the string and make a
destructor function to free the allocated memory.
*/
#include <bits/stdc++.h>
using namespace std;
class dynamicstring
{
    string *data;

public:
    dynamicstring(string s)
    {
        data = new string;
        *data = s;
        cout << "dynamicstring created." << endl;
    }
    ~dynamicstring()
    {
        cout << "dynamicstring deleted." << endl;
        delete data;
    }
    void display()
    {
        cout << "Your dynamic string is: " << *data << endl;
    }
};
int main()
{
    dynamicstring d1("hello");
    d1.display();
    return 0;
}