/*
Write a program to use the following functions: Put(), Get().
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    FILE *fp;
    char c;
    fp = fopen("sample.txt", "w");
    fputs("i wanna be a data analiyst.", fp);
    fclose(fp);
    FILE *out = fopen("sample.txt", "r");
    while ((c = fgetc(fp)) != EOF)
    {
        cout << c;
    }
    fclose(out);
    return 0;
}