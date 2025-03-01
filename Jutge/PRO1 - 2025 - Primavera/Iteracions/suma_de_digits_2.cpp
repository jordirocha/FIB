//
// Programa que lee una base de numeración b y varios números y que, para cada uno, escriba la suma los
// dígitos de x en base b
// Input: consiste en el valor de b≥2 seguido de una secuencia de naturales.
// Output: suma de sus digits en base b siguiendo el formato de los ejemplos.
//
#include <iostream>

using namespace std;

int main()
{
    int n, base;
    cin >> base;
    while (cin >> n)
    {
        int suma = 0;
        cout << n << ": ";
        while (n > 0)
        {
            suma += (n % base);
            n /= base;
        }
        cout << suma << endl;
    }
}