//
// Programa que, dada una secuencia de palabras, escriba cuántas palabras hay entre la palabra “principio” y la palabra
// “final”. Si falta la palabra “principio”, o falta la palabra “final”, o ambas, o si aparecen en orden inverso, debe
// indicarse
// Input: La entrada consiste en varias palabras. Tanto la palabra “principio” como la palabra “final”
// aparecen, a lo sumo, una vez
// Output: número de palabras entre la palabra “principio” y la palabra “final”, si éstas
// aparecen en este orden. De lo contrario, es necesario escribir “secuencia incorrecta”
//
#include <iostream>
using namespace std;
int main()
{
    string str;
    int counter = -1;
    bool final = false, start = false;
    while (not final and cin >> str)
    {
        if (str == "principi")
            start = true;
        if (str == "final" and start)
        {
            cout << counter << endl;
            final = true;
        }
        if (start and not final)
            counter++;
    }
    if (not start or (start and not final))
        cout << "sequencia incorrecta" << endl;
}
