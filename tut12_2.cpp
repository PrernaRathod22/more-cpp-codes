/*
Write a program to produce formatted output using the following functions:
Width(), Precision(), Fill(), Setf(), Unsetf()
*/
#include <bits/stdc++.h>
using namespace std;

// The width() function defines width
// of the next value to be displayed
// in the output at the console.
void IOS_width()
{
    cout << "--------------------------\n";
    cout << "Implementing ios::width\n\n";

    char c = 'A';

    // Adjusting width will be 5.
    cout.width(10);

    cout << c << "\n";

    int temp = 10;

    // Width of the next value to be
    // displayed in the output will
    // not be adjusted to 5 columns.
    cout << temp;
    cout << "\n--------------------------\n";
}

void IOS_precision()
{
    cout << "\n--------------------------\n";
    cout << "Implementing ios::precision\n\n";
    cout << "Implementing ios::width";
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    cout << 3.1422;
    cout << "\n--------------------------\n";
}

// The fill() function fills the unused
// white spaces in a value (to be printed
// at the console), with a character of choice.
void IOS_fill()
{
    cout << "\n--------------------------\n";
    cout << "Implementing ios::fill\n\n";
    char ch = 'a';

    // Calling the fill function to fill
    // the white spaces in a value with a
    // character our of choice.
    cout.fill('*');

    cout.width(10);
    cout << ch << "\n";

    int i = 1;

    // Once you call the fill() function,
    // you don't have to call it again to
    // fill the white space in a value with
    // the same character.
    cout.width(5);
    cout << i;
    cout << "\n--------------------------\n";
}

void IOS_setf()
{
    cout << "\n--------------------------\n";
    cout << "Implementing ios::setf\n\n";
    int val1 = 100, val2 = -200;
    cout.setf(ios::showpos);
    cout << val1 << " " << val2;
    cout << "\n--------------------------\n";
}

void IOS_unsetf()
{
    cout << "\n--------------------------\n";
    cout << "Implementing ios::unsetf\n\n";
    cout.setf(ios::showpos | ios::showpoint);
    // Clear the showflag flag without
    // affecting the showpoint flag
    cout.unsetf(ios::showpos);
    cout << 200.0;
    cout << "\n--------------------------\n";
}

// Driver Method
int main()
{
    IOS_width();
    IOS_precision();
    IOS_fill();
    IOS_setf();
    IOS_unsetf();
    return 0;
}
