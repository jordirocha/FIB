#include <iostream>
using namespace std;

//
// Mira si un número es primo, sí o no
// Pre: número natural
// Post: devuelve cierto si lo es, en caso contrario falso
//
bool es_primo(int x)
{
    if (x < 2) return false;
    for (int d = 2; d * d <= x; ++d)
        if (x % d == 0) return false;
    return true;
}

int main()
{
    int n;
    while (cin >> n)
    {
        int num = 3;
        cout << 2;
        while (n > 1)
        {
            if (es_primo(num))
            {
                cout << ',' << num;
                n--;
            }
            num++;
        }
        cout << endl;
    }
}
