/*
Construct a two-dimensional array using dynamic constructors.
*/
#include <bits/stdc++.h>
using namespace std;
class Dynamic
{
public:
    int **array;
    Dynamic(int a, int b)
    {
        array = new int *[a];
        for (int i = 0; i < a; i++)
            array[i] = new int[b];
        if (array != NULL)
            cout << "array created.\n";
    }
};
int main()
{
    int rows, j, cols;
    cout << "Enter number of rows and columns : ";
    cin >> rows, cols;
    Dynamic d1(rows, cols);
    cout << "Enter data as row major array: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cin >> d1.array[i][j];
        }
    }
    cout << "displaying data as row major array: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cout << d1.array[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}