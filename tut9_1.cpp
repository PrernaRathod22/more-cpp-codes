/*
Write a program to overload the [] operator.
*/
#include <bits/stdc++.h>
using namespace std;
class array_program
{
    int *arr;
    int size;

public:
    array_program(int *arr1, int size1);
    int &operator[](int);
    void display();
};
array_program ::array_program(int *p = NULL, int s = 0)
{
    size = s;
    arr = NULL;
    if (s != 0)
    {
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = p[i];
        }
    }
}
int &array_program::operator[](int index)
{
    if (index >= size)
    {
        cout << "Index ot of bound\n";
        exit(0);
    }
    return arr[index];
}
void array_program::display()
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[]{1, 5, 9, 6, 32, 5, 4, 125};
    int size = sizeof(a) / sizeof(a[0]);
    array_program a1(a, size);
    a1[5] = 456;
    a1.display();
    a1[8] = 456;
    return 0;
}