//
// Created by jordy on 22/03/2025.
//
#include <iostream>
using namespace std;
int concatenacio(int a, int b)
{
    int d = 1, c = b;
    while (c > 0)
    {
        d *= 10;
        c /= 10;
    }
    return a * d + b;
}

int main()
{
    int x, y;
    while (cin >> x >> y) cout << concatenacio(x, y) << endl;
}
