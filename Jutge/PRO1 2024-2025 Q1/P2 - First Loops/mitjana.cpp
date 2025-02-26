//
// El programa imprime la de media de una secuencia de numeros
// Input: secuencia de numeros
// Output: la media de la secuencia
//
#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(2);
    double n, counter = 0;
    double sum = 0.0;
    while (cin >> n)
    {
        sum += n;
        counter++;
    }
    cout << (sum / counter) << endl;
}