//
// Programa que, dado un entero x y una secuencia de naturales x1, …, xn, escriba xi.
// Input: un número y, seguido de la secuencia x1, …, xn terminada en −1
// Output: contenido de la posición
//
#include <iostream>

using namespace std;

int main()
{
    int i, x, currentPos = 1;
    cin >> i;
    cout << "A la posicio " << i;
    while (i > 0)
    {
        cin >> x;
        currentPos++;
        i--;
    }

    cout << " hi ha un " << x << "." << endl;
}
