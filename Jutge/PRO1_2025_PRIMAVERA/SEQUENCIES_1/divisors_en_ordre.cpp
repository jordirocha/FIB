//
// Programa que escriba en orden todos los divisores de un número dado
// Input: un natural entre 1 y 10^9
// Output: escriba los divisores de n de pequeño a mayor
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

int main()
{
    int n;
    while (cin >> n)
    {
        int d = 2;
        cout << "divisors de " << n << ":";

        if (n != 1)
        {
            cout << " " << 1;
        }

        cout << endl;

        if (not es_primo(n))
        {
            for (int i = 2; i * i <= n; ++i)
            {
                if (n % i == 0)
                {
                    // cout << i << " ";
                    cout << " " << (n) << "/" << i;
                    cout << " " << (n / i) << endl;
                }
            }
            // while (d < n)
            // {
            //     if (n % d == 0)
            //     {
            //         cout << " " << (d);
            //     }
            //     d++;
            // }
        }

        cout << " " << n << endl;
    }
}
