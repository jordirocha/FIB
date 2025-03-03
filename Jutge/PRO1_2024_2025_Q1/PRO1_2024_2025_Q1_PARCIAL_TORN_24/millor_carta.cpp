//
// Dadas dos cartas de poker, como caracter determinar cuál es más grande
// Input: un caracter del siguiente conjunto: {A, 2, 3, ..., 8, 9, 0, J, Q, K}
// Output: si el primero es mayor al segundo
//
#include <iostream>

using namespace std;

/** Obtiene el valor equivalente de la baraja de cartas del poker, considerando la
 * carta A como el valor máximo
 * @pre un caracter
 * @post su valor como entero
 */
int getEquivalent(char c)
{
    if (c == '0')
        return 10;
    else if (c == 'J')
        return 11;
    else if (c == 'Q')
        return 12;
    else if (c == 'K')
        return 13;
    else if (c == 'A')
        return 14;

    return c - '0';
}

/** Determina si la primera carta es mayor a la segunda
 * @pre c1, c2 en {A, 2, 3, ..., 8, 9, 0, J, Q, K}
 * @post Retorna cert si c1 té un valor més alt que c2
 */
bool better_card(char c1, char c2)
{
    return getEquivalent(c1) > getEquivalent(c2);
}

int main()
{
    char card1, card2;

    while (cin >> card1 >> card2)
    {
        cout << better_card(card1, card2) << endl;
    }
}
