//
// Programa lee una secuencia de naturales y, para cada uno, diga si es un número primero o no
// Input: consiste en un número n, seguido de n naturales.
// Output: una línea si es primero o no
//
#include <iostream>

using namespace std;

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
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        cout << x;
        if (es_primo(x))
            cout << " es primer" << endl;
        else
            cout << " no es primer" << endl;
    }
}
