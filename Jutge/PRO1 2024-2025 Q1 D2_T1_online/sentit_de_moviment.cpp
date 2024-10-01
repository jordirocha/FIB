#include <iostream>

using namespace std;

int main()
{
    int lines, x1, y1, x2, y2;
    // Primero leemos la cantidad de lineas a leer
    cin >> lines;

    for (int i = 0; i < lines; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        // para la dirección N o S, usamos las coordenadas x de cada punt
        int yDistance = y2 - y1;
        // para la dirección O o E, usamos las coordenadas y de cada punt
        int xDistance = x2 - x1;

        // la diferencia nos da un numero (-) esto nos quiere decir que se dirige al S, si es positivo (+) al N
        if (yDistance > 0)
            cout << 'N';
        else if (yDistance < 0)
            cout << 'S';

        // la diferencia nos da un numero (-) esto nos quiere decir que se dirige al O, si es positivo (+) al E
        if (xDistance > 0)
            cout << 'E';
        else if (xDistance < 0)
            cout << 'O';
        // Salto de linea para separar cada movimiento
        cout << endl;
    }
}
