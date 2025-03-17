//
// Programa que obtiene el factor primer mas frecuente de un numero natural y cuantas veces parece
// Input: un número natural mayor igual a 2
// Output: descomposición del número con el factor más pequeño
//
#include <iostream>

using namespace std;

//
// Mira si un número es primo, sí o no
// Pre: número natural
// Post: devuelve cierto si lo es, en caso contrario falso
//
bool es_primo(int x)
{
    if (x < 2)
        return false;
    for (int d = 2; d * d <= x; ++d)
        if (x % d == 0)
            return false;
    return true;
}

void factor(int n, int &f, int &q)
{
    if (not es_primo(n))
    {
        q = -1;
        int divisors = 0;
        while (n % 2 == 0)
        {
            divisors++;
            n = n / 2;
        }
        if (divisors > 0)
        {
            f = 2;
            q = divisors;
        }
        for (int i = 3; i * i <= n; i += 2)
        {
            divisors = 0;
            while (n % i == 0)
            {
                n = n / i;
                divisors++;
            }
            if (divisors > 0 and divisors > q)
            {
                f = i;
                q = divisors;
            }
        }
    }
    else
    {
        f = n;
        q = 1;
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        int f = -1, q = 1000;
        factor(n, f, q);
        cout << f << ' ' << q << endl;
    }
    return 0;
}
