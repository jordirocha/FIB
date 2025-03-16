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
int cardValue(char c)
{
    if (c == '0') return 10;
    if (c == 'J') return 11;
    if (c == 'Q') return 12;
    if (c == 'K') return 13;
    if (c == 'A') return 14;
    return c - '0';
}
/** Determina si la primera carta es mayor a la segunda
 * @pre c1, c2 en {A, 2, 3, ..., 8, 9, 0, J, Q, K}
 * @post Retorna cert si c1 té un valor més alt que c2
 */
bool better_card(char c1, char c2)
{
    return cardValue(c1) > cardValue(c2);
}

int main()
{
    char c1, c2;
    while (cin >> c1 >> c2)
        cout << better_card(c1, c2) << endl;
}
