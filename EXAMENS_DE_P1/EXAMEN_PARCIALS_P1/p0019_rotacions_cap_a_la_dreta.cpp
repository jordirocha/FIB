#include <iostream>
using namespace std;

int rotacio_dreta(int x, int k)
{
    int y = x, unidad = 1;
    while (y > 9)
    {
        unidad *= 10;
        y /= 10;
    }
    while (k > 0)
    {
        int newValue = (x % 10) * unidad;
        x            = x / 10;
        x            = x + newValue;
        k--;
    }
    return x;
}

int main()
{
    int x, k;
    while (cin >> x >> k) { cout << rotacio_dreta(x, k) << endl; }
}
