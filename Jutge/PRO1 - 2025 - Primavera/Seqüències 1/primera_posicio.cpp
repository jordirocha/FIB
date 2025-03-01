//
// Programa lee una secuencia de naturales y que indique la posición del primer número par
// Input: una secuencia de naturales que contiene, al menos, un número par
// Output: la posición del primer número par de la secuencia
//
#include <iostream>

using namespace std;

int main()
{
    int a, currentPos = 1;
    cin >> a;

    while (a % 2 != 0)
    {
        cin >> a;
        currentPos++;
    }

    cout << currentPos << endl;
}
