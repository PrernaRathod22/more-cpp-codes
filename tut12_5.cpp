/*
Write a program to create files with constructor function, open function, and using
various file mode parameters.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    fstream myfile;
    // myfile.open("sampleA.txt", ios::out);
    // if (myfile.is_open())
    // {
    //     cout << "File created sucessfully!!";
    //     myfile << "This is some words for sampleA file.";
    //     myfile.close();
    // }
    // else
    //     cout << "File can't created.";

    myfile.open("sampleA.txt", ios::in);
    if (!myfile)
        cout << "No such a sampleA file.";

    else
    {
        string ch;
        while (!myfile.eof())
        {
            getline(myfile, ch);
            cout << ch;
        }
    }
    myfile.close();
    return 0;
}