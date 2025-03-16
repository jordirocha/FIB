//
// Programa que informe de las repeticiones consecutivas en una secuencia de cartas de Poker.
// Se trata de detectar subsecuencias consecutivas de cartas iguales, de una longitud k ≥ 2, y escribir en la salida una
// frase describiendo cada subsecuencia utilizando los nombres típicos del Poker
// Input: La entrada consiste en una secuencia de caracteres que representan las cartas
// Output: Cantidad de repeticiones consecutivas de cartas y
// escribir en la salida la descripción que corresponda al número de veces k que la carta C ha salido repetida: "Pareja
// de Cs", "Trío de Cs", "Poker de Cs" o "k Cs!"
//
#include <iostream>

using namespace std;

void print(char c, int r)
{
    if (r == 2)
        cout << "Parella de " << c << 's' << endl;
    else if (r == 3)
        cout << "Trio de " << c << 's' << endl;
    else if (r == 4)
        cout << "Poker de " << c << 's' << endl;
    else
        cout << r << ' ' << c << "s!" << endl;
}

int main()
{
    char ch;
    int repeticions = 1;
    cin >> ch;

    while (ch != '.')
    {
        char prev = ch;
        cin >> ch;
        if (prev == ch)
            repeticions++;
        else
        {
            if (repeticions > 1)
            {
                print(prev, repeticions);
                repeticions = 1;
            }
        }
    }
}
