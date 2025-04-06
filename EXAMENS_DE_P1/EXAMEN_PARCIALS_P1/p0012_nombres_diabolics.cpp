#include <iostream>
using namespace std;

void toBase(int n, int &sum)
{
    if (n > 0)
    {
        toBase(n / 4, sum);
        sum += n % 4;
    }
}

int digits(int n)
{
    int d;
    if (n < 10) { d = 1; }
    else { d = 1 + digits(n / 10); }
    return d;
}

bool es_diabolic(int n)
{
    int suma = 0;
    toBase(n, suma);
    return n % (suma * 2) == 0;
}

int main()
{
    int a, c = 0;
    while (cin >> a and a != -1)
        if (es_diabolic(a)) c++;
    for (int i = digits(c); i < 6; ++i) cout << 0;
    cout << c << endl;
}
