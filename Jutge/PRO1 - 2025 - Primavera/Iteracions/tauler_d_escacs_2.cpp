//
// Programa que, dado un tablero, calcule el número total de monedas contenidas en las casillas blancas.
// Input: La entrada comienza con el número de filas f y el número de columnas c. Siguen f líneas, cada una con c
// caracteres entre '0' y '9'.
// Output: número total de monedas en las casillas blancas del tablero.
//
#include <iostream>

using namespace std;

int main()
{
    int row, column;
    cin >> row >> column;

    int suma = 0;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
        {
            char x;
            cin >> x;
            if ((i + j) % 2 == 0)
                suma += x - '0';
        }

    cout << suma << endl;
}
