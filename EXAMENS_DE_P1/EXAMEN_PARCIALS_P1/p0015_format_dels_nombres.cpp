#include <iostream>
using namespace std;

int nombre_digits(int n, int b)
{
    int c = 0, m = n;
    while (m > 0)
    {
        c++;
        m /= b;
    }
    return n == 0 ? 1 : c;
}

void base(int n, int b)
{
    if (n > 0)
    {
        base(n / b, b);
        cout << n % b;
    }
}

int main()
{
    int n, b, c;
    while (cin >> n >> b >> c)
    {
        int d = nombre_digits(n, b);
        if (d == c) { cout << n; }
        else if (d < c)
        {
            for (int i = d; i < c; i++) cout << '#';
            if (n == 0) { cout << 0; }
            else { base(n, b); }
        }
        else if (d > c)
        {
            for (int i = 0; i < c; i++) cout << '*';
        }
        cout << endl;
    }
}
