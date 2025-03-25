#include <iostream>
using namespace std;
int main()
{
    int n, a = 0, b = 0, c = 0, max = 0;
    char l = '-';
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        if (ch == 'a') { a++; }
        else if (ch == 'b') { b++; }
        else { c++; }
    }
    if (a > max)
    {
        l   = 'a';
        max = a;
    }
    if (b > max)
    {
        l   = 'b';
        max = b;
    }
    if (c > max)
    {
        l   = 'c';
        max = c;
    }
    cout << "majoria de " << l << endl << max << " repeticio(ns)" << endl;
}
