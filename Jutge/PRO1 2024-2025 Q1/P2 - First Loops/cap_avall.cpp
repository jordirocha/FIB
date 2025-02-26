//
// El programa lee dos numeros enteros x e y y escribe los numeros entre ellos, de grande a pequeño
// Input: dos numeros enteros
// Output: Imprime los numeros entre x e y
//
#include <iostream>

using namespace std;

int main()
{
    int x, y, max, min;
    cin >> x >> y;
    max = x;
    min = y;
    if (y > max)
    {
        max = y;
        min = x;
    }
    for (int i = max; i >= min; i--)
        cout << i << endl;
}