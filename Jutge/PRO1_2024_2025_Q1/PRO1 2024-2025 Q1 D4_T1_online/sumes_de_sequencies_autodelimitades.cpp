#include <iostream>

using namespace std;

int main()
{
    // Mi algoritmo:
    // 1) lee de entrada "1101110001110011" dos caracteres y comprueba primero si es la secuencia "01"
    // si no lo es entonces es un numero a sumar y acumular hasta que encuentre una secuencia "01" y entonces
    // almacena lo sumado en otra variable y reinicia el valor de "sumTotal" a cero para los siguientes
    // digitos a sumar. Cuando lleg a al secuencia "0101" entonces se muestra por pantall
    // la suma total de la secuencia y se reinician variables para la siguiente secuencia

    char x, y;
    int sequence = 0;
    int sumTotal = 0;
    int acum = 0;

    // Secuencia de recorrido sin centinela
    while (cin >> x >> y)
    {
        if (x == '0' and y == '1')
        {
            sequence++;
            // Si detecta dos veces entonces se muestra por pantalla el valor decimal
            if (sequence == 2)
            {
                cout << acum << endl;
                acum = sumTotal = sequence = 0;
            }
            else
            {
                // de lo sumado actualmente hasta llegar a una secuencia separador acumulados y
                // "sumTotal" para a ser 0 para el siguiente digito
                acum += sumTotal;
                sumTotal = 0;
            }
        }
        else
        {
            // Acumulando los digitos
            sumTotal = sumTotal * 2 + (x - '0');
            sequence = 0;
        }
    }
}
