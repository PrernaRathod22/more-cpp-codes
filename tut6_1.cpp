/*
Write C++ Program to display the cube of the number starting from 1 upto a given
integer using constructor and destructor. (Hint: Read the value of n from user and if
n=3, the output of the program should be 1,8,27 (i.e. cube of 1,2 and 3)
*/
#include <bits/stdc++.h>
using namespace std;
class cube
{
public:
    cube(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i * i * i << "\t";
        }
    }
};
int main()
{
    cube c1(3);
    return 0;
}