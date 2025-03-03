//
// El programa lee un número primo y obtiene el siguiente, terminamos al introducir uno no primo
// Input: un número natural primo
// Output: el siguiente número primo
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
//
// Obtiene el siguiente número primo
// Pre: número natural
// Post: devuelve el siguiente número primo
//
int siguiente_primo(int x)
{
    int num = x + 1;

    while (not es_primo(num))
        num++;

    return num;
}

int main()
{
    int n;
    cin >> n;

    while (es_primo(n))
    {
        cout << siguiente_primo(n) << endl;
        cin >> n;
    }
}
