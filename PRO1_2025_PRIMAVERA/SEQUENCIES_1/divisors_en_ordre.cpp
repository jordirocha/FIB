//
// Programa que escriba en orden todos los divisores de un número dado
// Input: un natural entre 1 y 10^9
// Output: escriba los divisores de n de pequeño a mayor
//
#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        {
            int d;
            cout << "divisors de " << n << ": " << 1;
            for (d = 2; d * d <= n; d++)
                if (n % d == 0) { cout << " " << d; }
            for (int i = d - 1; i >= 1; i--)
                if (n % i == 0 and i * i != n) cout << " " << n / i;
            cout << endl;
        }
    }
}
