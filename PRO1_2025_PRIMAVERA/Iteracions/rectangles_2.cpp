//
// programa que escribe rectángulos n× m, cada rectángulo de forma independiente, y rellene con un 9, después un 8, …,
// después un 0, etcétera.
// Input: La entrada consiste en varios naturales.
// Output: Para cada par (n,m), escriba un rectángulo de tamaño n × m llenándolo con 9,8,…0, 9, …. Separe dos cuadrados
// con una línea en blanco.
//
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    bool first = true;

    while (cin >> n >> m)
    {
        int num = 9;
        if (first)
            first = false;
        else
            cout << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (num < 0)
                    num = 9;
                cout << num;
                num--;
            }
            cout << endl;
        }
    }
}
