#include <iostream>
using namespace std;

struct Racional
{
    int num, den;
};

int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

Racional racional(int n, int d)
{
    int divisor = gcd(n, d);
    Racional racional;
    racional.num = n / divisor;
    racional.den = d / divisor;
    if (racional.den < 0)
    {
        racional.num = -1 * (n / divisor);
        racional.den = -1 * d / divisor;
    }
    return racional;
}

int main()
{
    int num, den;
    while (cin >> num >> den)
    {
        Racional r = racional(num, den);
        cout << r.num << " " << r.den << endl;
    }
    return 0;
}
