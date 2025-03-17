//
// Programa que lee una secuencia de enteros y dice si existe algún número capicúa, no diremos que son capicúas numeros
// de uno o dos digitos
// Input: consiste en una secuencia de enteros positivos.
// Output: La salida debe ser "Nada." si no hay ningún número capicúa o "n!", donde n es el primer número capicúa
// encontrado.
//
#include <iostream>

using namespace std;
//
// Determina si un numero de mas de dos digitos es capicua o no
// Input: un numero natural de dos digitos
// Output: verdadero si lo es, en caso contario falso
//
bool es_capicua(int n)
{
    if (n <= 99)
        return false;

    int temp = n;
    int reversedNumber = 0;

    while (temp > 0)
    {
        reversedNumber = reversedNumber * 10 + (temp % 10);
        temp /= 10;
    }

    return reversedNumber == n;
}

int main()
{
    int n;
    bool algunaCapicua = false;

    while (not algunaCapicua and cin >> n)
        algunaCapicua = es_capicua(n);

    if (algunaCapicua)
        cout << n << '!' << endl;
    else
        cout << "Res." << endl;
}
