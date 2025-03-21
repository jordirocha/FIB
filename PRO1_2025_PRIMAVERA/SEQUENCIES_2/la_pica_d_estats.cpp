//
// Programa que, dada una secuencia de enteros estrictamente positivos terminada
// en 0, diga si contiene algún pico mayor que 3143, un pico es cuando es mayor
// al antecesor y sucesor Input: la entrada es una secuencia de enteros
// estrictamente positivos Output: la salida debe ser “SI” si hay algún pico
// mayor que 3143, y “NO” de otro modo.
//
#include <iostream>
using namespace std;
const int PICA = 3143;
int main()
{
    int l, c, r;
    cin >> l >> c >> r;
    while (r != 0 and (c <= PICA or c <= l or c <= r))
    {
        l = c;
        c = r;
        cin >> r;
    }
    if (r == 0)
        cout << "NO" << endl;
    else
        cout << "SI" << endl;
}
