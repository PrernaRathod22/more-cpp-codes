/*
Declare a class called bird having data members as name and color. Derive two
classes called flying and non-flying has data member speed_to_walk. Declare a pure
virtual function get_speed and display in base class bird. Override these two in the
derived classes for getting speed and displaying all data members of the class.
*/
#include <bits/stdc++.h>
using namespace std;
class bird
{
public:
    string name;
    string colour;

    // bird();
    void bird_set(string N, string C)
    {
        name = N;
        colour = C;
    }
    virtual void display()
    {
        cout << "Name of bird is " << name << "\nColour of the bird is " << colour << endl;
    }
};
class flying : public bird
{

public:
    float speed_to_fly;
    // flying() {}
    void flying_fn(float f)
    {
        speed_to_fly = f;
    }
    virtual void display()
    {
        cout << "Name of bird is " << name << "\nColour of the bird is " << colour << "\nSpeed of flying is " << speed_to_fly << endl;
    }
};
class nonflying : public bird
{

public:
    float speed_to_walk;
    // nonflying() {}
    void nonflying_fn(float f2)
    {
        speed_to_walk = f2;
    }
    void display()
    {
        cout << "Name of bird is " << name << "\nColour of the bird is " << colour << "\nSpeed of walking is " << speed_to_walk << endl;
    }
};
int main()
{
    bird *bird_obj1;
    bird *bird_obj2;

    flying *flying_bird;
    nonflying *nonflying_bird;

    bird bird1;
    bird bird2;
    flying b1;
    nonflying b2;

    flying_bird = &b1;
    flying_bird->flying_fn(45.23);
    flying_bird->bird_set("Sperrow", "Gray");

    nonflying_bird = &b2;
    nonflying_bird->nonflying_fn(15.23);
    nonflying_bird->bird_set("panguine", "Black");

    flying_bird->display();
    nonflying_bird->display();

    bird_obj1 = &b1;
    bird_obj1->bird_set("peacock", "blue");

    bird_obj2 = &b2;
    bird_obj2->bird_set("parrot", "green");

    bird_obj1->display();
    bird_obj2->display();

    return 0;
}