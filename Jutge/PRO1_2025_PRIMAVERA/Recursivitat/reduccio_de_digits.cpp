#include <iostream>
using namespace std;

int suma_digits(int x)
{
    if (x < 10)
        return x;
    return (x % 10) + suma_digits(x / 10);
}

int reduccio_digits(int x)
{
    int suma = suma_digits(x);
    if (suma < 10)
        return suma;
    return reduccio_digits(suma);
}

int main()
{
    int a;
    while (cin >> a)
    {
        cout << reduccio_digits(a) << endl;
    }
}
