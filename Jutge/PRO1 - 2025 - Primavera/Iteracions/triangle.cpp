//
// Programa que, dado un número n, escriba un “triángulo de tamaño n”
// Input: la entrada consiste en un natural n
// Output: escriba n líneas, por lo que la línea y contenga y asteriscos
//
#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}
