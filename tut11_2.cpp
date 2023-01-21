/*
Demonstration the use of pointer to object.
*/
#include <stdio.h>
#include <iostream>
using namespace std;

class base
{
public:
    int base_data;
    void setdata(int x)
    {
        base_data = x;
        cout << "I'm function base class " << base_data << endl;
    }
};

int main()
{
    int num;
    base *ptr = new base[5];
    base *temp = ptr;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter data : ";
        cin >> num;
        ptr->setdata(num);
        ptr++;
    }

    return 0;
}
