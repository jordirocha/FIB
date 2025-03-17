#include <iostream>

using namespace std;

int suma_digits(int x)
{
    int suma;
    if (x < 10)
        suma = x;
    else
        suma = (x % 10) + suma_digits(x / 10);
    return suma;
}

//
// Mira si un número es primo, sí o no
// Pre: número natural
// Post: devuelve cierto si lo es, en caso contrario falso
//
bool es_primo(int x, int i)
{
    bool prime;
    if (x < 2)
        prime = false;
    else if (i * i > x)
        prime = true;
    else if (x % i == 0)
        prime = false;
    else
        prime = es_primo(x, ++i);
    return prime;
}

bool es_primer_perfecte(int n)
{
    bool result;

    if (n < 10)
        result = (n == 2 or n == 3 or n == 5 or n == 7);
    else
    {
        int suma = suma_digits(n);
        result = es_primo(n, 2) and es_primer_perfecte(suma);
    }
    return result;
}
