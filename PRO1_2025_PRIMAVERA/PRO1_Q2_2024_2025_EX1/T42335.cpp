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
        // cout << "caso recursivo" << endl;
        // cout << a << " " << b << endl;
        return abs(a - b) + res;
    }
    else
    {
        // cout << "caso base" << endl;
        // cout << x << " " << y << endl;
        res = abs(x - y);
    }

    return res;
}

int main()
{
    bool desc = true;
    int a, b;
    int diff = 0;
    // cin >> a >> b;
    cin >> a;

    while (desc and cin >> b)
    {
        // cout << a
        //      << " "
        //      << b << endl;

        if (diff > diferencia(a, b))
        {
            desc = false;
        }
        else
        {
            diff = diferencia(a, b);
        }
        a = b;
    }

    if (desc)
    {
        cout << "SI" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
