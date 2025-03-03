//
// Programa que, dada una secuencia de enteros estrictamente positivos terminada en 0, diga si contiene algún pico mayor
// que 3143, un pico es cuando es mayor al antecesor y sucesor
// Input: la entrada es una secuencia de enteros estrictamente positivos
// Output: la salida debe ser “SI” si hay algún pico mayor que 3143, y “NO” de otro modo.
//
#include <iostream>

using namespace std;

int main()
{
    int pica = 3143, izq, cen, der;
    cin >> izq >> cen >> der;

    bool isPica = false;
    while (der != 0 and not isPica)
    {
        if (cen > pica)
            isPica = (cen > izq and cen > der);
        izq = cen;
        cen = der;
        cin >> der;
    }

    if (isPica)
        cout << "SI" << endl;
    else
        cout << "NO" << endl;
}
