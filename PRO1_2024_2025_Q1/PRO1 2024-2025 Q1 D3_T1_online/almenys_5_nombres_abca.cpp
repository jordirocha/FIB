#include <iostream>

using namespace std;

int main()
{
    int n;
    // Variable que nos indicara si como minimo hay 5 enteros que cumples las condiciones del ejercicio
    int counterNumbers = 0;

    while (cin >> n)
    {
        int copyN = n, counter = 0, firstDigit = 0;

        // Primer bucle que contara la cantidad de digitos del numero entero
        while (n > 0)
        {
            // Para cuando n es menor a 10, asignamos el primer digito
            if (n < 10)
                firstDigit = n;
            n /= 10;
            // Contará la cantidad de digitos del numero
            counter++;
        }
        // Si la cantidad de digitos es mayor a 4 entramos para comprobar
        if (counter > 3)
        {
            // Obtenemos el ultimo digito
            int lastDigit = copyN % 10;
            // Comprobamos que el primer digito y el ultimo son iguales
            if (firstDigit == lastDigit)
                // En tal caso sumamos 1
                counterNumbers++;
        }
    }
    // Si counterNumbers es 5 entonces si que cumple las condiciones las enunciado, sino no
    if (counterNumbers >= 5)
        cout << "SI";
    else
        cout << "NO";
}
