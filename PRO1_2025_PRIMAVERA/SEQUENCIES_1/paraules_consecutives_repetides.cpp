//
// Dada una secuencia de palabras, escriba la longitud de la subsecuencia consecutiva más larga que sólo contiene la
// primera palabra
// Input: una secuencia no vacía de palabras.
// Output: el número de palabras de la subsecuencia consecutiva más larga que sólo contiene la primera palabra
//
#include <iostream>

using namespace std;

int main()
{
    string str, strInput;
    int max = 1, repetida = 1;

    cin >> str;

    while (cin >> strInput)
    {
        if (str == strInput)
            repetida++;
        else
        {
            if (repetida > max)
                max = repetida;
            repetida = 0;
        }
    }

    if (repetida > max)
        max = repetida;

    cout << max << endl;
}
