#include <iostream>

using namespace std;

int main()
{
    int n;
    // Declaramos el posible primer numero extraño
    int strangeNum = 1;
    // n va a ser la cantidad de numeros extraños a obtener
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int copyN1, copyN2, pow = 0, sum = 0;
        // dos variables que son copia del primer numero extraño
        copyN1 = copyN2 = strangeNum;
        // primer bucle usado para obtener el exponente para cada base del numero
        while (copyN1 != 0)
        {
            copyN1 /= 10;
            pow++;
        }

        int currentSum = 1;
        // segundo bucle usado para obtener la suma de cada base elevado al exponente obtenido
        while (copyN2 != 0)
        {
            // Obtenemos cada digito del numero
            int currentValue = copyN2 % 10;
            // bucle usado para obtener el valor de digito elevado al exponente, iremos acumulando la suma
            for (int j = 0; j < pow; j++)
                currentSum *= currentValue;
            // la suma actual la iremos acumulando
            sum += currentSum;
            // reinciamos la suma actual a 1, para el siguiente digito
            currentSum = 1;
            // pasamos al siguiente digito, hasta que el valor sea 0
            copyN2 /= 10;
        }
        // comparación con la variable original para obtener si es "extraño" o no
        if (strangeNum == sum)
            cout << strangeNum << " ";
        else // En caso de que no decrementamos la variable i
            i--;
        // Continuamos con el siguiente posible numero estraño
        strangeNum++;
    }
}