//
// programa que lea pares de números n y m con n ≥ m, y que para cada uno escriba Hn − Hm.
// Input: varios pares de naturales n y m tales que n ≥ m.
// Output: la diferencia entre Hn − Hm con diez cifras decimales.
//
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        double harmonic = 0.0;
        for (int i = b + 1; i <= a; i++)
            harmonic += 1.0 / i;
        cout.setf(ios::fixed);
        cout.precision(10);
        cout << (harmonic) << endl;
    }
}
