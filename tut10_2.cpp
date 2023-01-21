/*
Consider a simple example. Class student stores the roll-number, class test stores
the marks in two subjects and class result contains the total marks obtained in the
test. The class result inherits the details of the marks obtained and roll number of
students through multilevel inheritance. Write a program to demonstrate the above.
Extend the program in (2) to add a sports class. The result class inherits the details
of marks obtained from class test and the performance in sports from the sports
class (hybrid inheritance).
*/
#include <bits/stdc++.h>
using namespace std;
class Student
{
protected:
    int rollno = 0;

public:
    Student() {}
    void setRollno(int x)
    {
        rollno = x;
    }
    void get_rollno()
    {
        cout << "The roll number of student is : " << rollno << endl;
    }
};
class test : public Student
{
protected:
    int maths = 0, physics = 0;

public:
    test() {}
    void setTest(int a, int b)
    {
        maths = a;
        physics = b;
    }
    void getmarks()
    {
        cout << "The marks int maths and physics are : " << maths << " " << physics << endl;
    }
};
class sports : public test
{
protected:
    int marks = 0;

public:
    sports() {}
    void setSports(int z)
    {
        marks = z;
    }
    void getSportsMarks()
    {
        cout << "Marks in sports is : " << marks << endl;
    }
};
class result : public sports
{
protected:
    float res1 = 0.00;

public:
    result() {}
    void setResult()
    {
        res1 = (marks + maths + physics) / 3.00;
    }
    result(float num)
    {
        res1 = num;
    }
    void get_result()
    {
        cout << "The result of this student is : " << res1 << endl;
    }
    void show()
    {
        get_rollno();
        getmarks();
        getSportsMarks();
        get_result();
    }
};
int main()
{
    // Student, test, sports, result
    result res1, res2(89.66);
    res1.setRollno(5);
    res1.setTest(95, 86);
    res1.setSports(99);
    res1.setResult();
    res1.show();

    res2.show();
    return 0;
}