//
// Programa que escriba en orden todos los divisores de un número dado
// Input: un natural entre 1 y 109
// Output: escriba los divisores de n de pequeño a mayor
//
#include <iostream>
using namespace std;

bool es_primo(int x)
{
    bool prime = x > 1;
    int d = 2;
    while (prime and d * d <= x)
    {
        if (x % d == 0)
        {
            cout << d << " ";
            // prime = false;
        }
        ++d;
    }

    return prime;
}

int main()
{
    int n;

    cout << es_primo(100);
    // while (cin >> n)
    // {
    //     int d = 1;
    //     cout << "divisors de " << n << ": ";
    //     while (d <= n / 2)
    //     {
    //         if (n % d == 0)
    //         {
    //             cout << (d) << " ";
    //         }
    //         d = d + 1;
    //     }
    //     cout << (n) << endl;
    // }
}
