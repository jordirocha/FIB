//
// El programa imprime cuantos elementos son multiples de un numero entero
// estrictamente positivo
// Input: un numero entero estrictamente positivo
// Output: cantidad de elementos multiples
//
#include <iostream>

using namespace std;

int main()
{
    int a, b, multiples = 0;

    cin >> a;

    while (cin >> b)
        if (b % a == 0)
            multiples++;

    cout << multiples << endl;
}
