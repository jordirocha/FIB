//
// Programa que lea una secuencia de caracteres, cada uno de los cuales codificando un movimiento ('n' por norte, 's'
// por sur, 'e' por este, y 'u' por oeste), y que calcule la posición final de un objeto que inicialmente se encontrara
// en la posición (0, 0). Suponga que la primera componente se corresponde a la dirección este-oeste, que ir hacia el
// este significa sumar 1 a esa componente, y que ir hacia el sur significa sumar 1 a la segunda componente. Input:
// consiste en una secuencia de caracteres terminada en ‘.’. Output: una línea con “si” o “no”
// Input: la entrada consiste en una secuencia de caracteres 'n', 's', 'e' o 'o'
// Output: la posición final de un objeto
//
#include <iostream>

using namespace std;

int main()
{
    int x = 0, y = 0;
    char ch;
    while (cin >> ch)
    {
        if (ch == 'n')
            x -= 1;
        else if (ch == 's')
            x += 1;
        else if (ch == 'e')
            y += 1;
        else
            y -= 1;
    }
    cout << '(' << y << ", " << x << ')' << endl;
}
