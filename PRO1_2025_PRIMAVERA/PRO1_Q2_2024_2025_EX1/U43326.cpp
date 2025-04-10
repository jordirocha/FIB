#include <iostream>
#include <cmath>
using namespace std;

int diferencia(int x, int y)
{
    int res;
    if (x >= 10 or y >= 10)
    {
        res = diferencia(x / 10, y / 10);
        int a = x % 10;
        int b = y % 10;
        return abs(a - b) + res;
    }
    else
    {
        res = abs(x - y);
    }

    return res;
}

int main()
{
    // int a, b;
    // cin >> a >> b;
    cout << diferencia(1, 1000) << endl;
}
