/*
Demonstrate the concept of pointer to derived class object.
*/
#include <bits/stdc++.h>
using namespace std;
class base
{
    int base_data;

public:
    void setdata_base(int x)
    {
        base_data = x;
        cout << "Data for base is seted.\n";
    }
    void display()
    {
        cout << "Your data of base is " << base_data << endl;
    }
};
class derived : public base
{
    int derived_data;

public:
    void setdata_derived(int x)
    {
        derived_data = x;
        cout << "Data for derived is seted.\n";
    }
    void display()
    {
        cout << "Your data of derived is " << derived_data << endl;
    }
};
int main()
{
    base base_obj;
    derived derived_obj;

    base *base_ptr;
    base_ptr = &derived_obj;

    derived *derived_ptr;
    derived_ptr = &derived_obj;

    base_obj.setdata_base(67);
    base_obj.display();

    base_ptr->setdata_base(89);
    base_ptr->display();

    derived_obj.setdata_base(56);
    derived_obj.setdata_derived(10);
    derived_obj.display();

    derived_ptr->setdata_base(78);
    derived_ptr->setdata_derived(20);
    derived_ptr->display();

    return 0;
}