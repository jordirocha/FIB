//
// Programa que, dado un entero x y una secuencia de naturales x1, …, xn, escriba xi.
// Input: un número y, seguido de la secuencia x1, …, xn terminada en −1
// Output: caso de que la posición y es correcta, es necesario escribir el contenido, en otro caso “Posición
// incorrecta.”.
//
#include <iostream>

using namespace std;

int main()
{
    int i, x, currentPos = 1, num = 0;
    bool match = false;
    cin >> i;

    while (cin >> x)
    {
        if (currentPos == i)
        {
            match = true;
            num = x;
        }
        currentPos++;
    }

    if (match)
        cout << "A la posicio " << i << " hi ha un " << num << "." << endl;
    else
        cout << "Posicio incorrecta." << endl;
}
