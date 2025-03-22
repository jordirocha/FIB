//
// Created by jordy on 22/03/2025.
//
#include <iostream>
using namespace std;
int intercalacio(int x, int y)
{
    int num = 0, i = 1;
    while (x > 0 and y > 0)
    {
        num = (y % 10) * i + num;
        i *= 10;
        num = (x % 10) * i + num;
        i *= 10;
        x = x / 10;
        y = y / 10;
    }
    return num;
}

int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        if (y == 0) { cout << x * 10 << endl; }
        else if (x == 0) { cout << y << endl; }
        else { cout << intercalacio(x, y) << endl; }
    }
}
