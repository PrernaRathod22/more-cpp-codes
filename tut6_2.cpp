/*
For the complex Class, demonstrate the use of multiple constructors.
*/
#include <bits/stdc++.h>
using namespace std;

class comPlex
{
public:
    int realNo, imgNo;
    comPlex(void);
    comPlex(string s);
    comPlex(int x, int y);
    comPlex(int x);
    ~comPlex()
    {
        cout << "we are in destructor\n";
    }
};

comPlex::comPlex(int n, int k)
{
    realNo = n;
    imgNo = k;
}

comPlex::comPlex(int n)
{
    realNo = n;
    imgNo = 5;
}
comPlex::comPlex(string s)
{
    cout << "String constructor is called and it says " << s << "\n";
}

int main()
{
    comPlex c3(1, 5), c1(2, 3), c2("_jkl_"), c4(9);
    cout << c1.realNo + c3.realNo << "\n";
    cout << c1.imgNo + c3.imgNo << "\n";
    cout << c4.imgNo + c4.imgNo << "\n";
    return 0;
}