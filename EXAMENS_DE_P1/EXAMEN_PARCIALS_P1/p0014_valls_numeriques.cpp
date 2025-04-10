#include <iostream>
using namespace std;

int nombre_digits(int n)
{
    if (n < 10) return 1;
    return 1 + nombre_digits(n / 10);
}

void print(int r, int x)
{
    if (r > 0) cout << x;
    for (int i = 1; i < r; i++) cout << "-" << x;
}

int main()
{
    int n, f, r = 1;
    cin >> n >> f;
    int dots = nombre_digits(n) * (f - 1) + (f - 1);
    while (f > 0)
    {
        print(r, n);
        for (int i = 0; i < dots; i++) cout << '.';
        cout << '.';
        for (int i = 0; i < dots; i++) cout << '.';
        print(r, n);
        cout << endl;
        r++;
        f--;
        dots = nombre_digits(n) * (f - 1) + (f - 1);
    }
}
