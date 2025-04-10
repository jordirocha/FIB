#include <cmath>
#include <iostream>
using namespace std;

int diferencia(int x, int y)
{
    int res;
    if (x >= 10 or y >= 10)
    {
        res   = diferencia(x / 10, y / 10);
        int a = x % 10;
        int b = y % 10;
        return abs(a - b) + res;
    }
    else { res = abs(x - y); }

    return res;
}

int main()
{
    bool desc = true;
    int a, b, diff = 0;
    cin >> a;
    while (desc and cin >> b)
    {
        int temp = diferencia(a, b);
        if (diff > temp) { desc = false; }
        else { diff = temp; }
        a = b;
    }

    if (desc) { cout << "SI" << endl; }
    else { cout << "NO" << endl; }
}