/*
Write a program to use the following functions:Getline(), Write().
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    // ofstream myfile("sample.txt");
    // if (myfile.is_open())
    // {
    //     myfile << "hey buddy my name is XYZ.\n";
    //     myfile << "and this is a cpp file.";
    //     myfile.close();
    // }
    // else
    //     cout << "Can't open this file.";
    ifstream myfile("sample.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
    }
    else
        cout << "Can't open this file";
    char l[5];
    cout << "Enter your name : ";
    // getline(cin, line);

    cin.getline(l, 5);
    cout << l << endl;
    return 0;
}