//
// El programa imprime la suma de los cubos entre a y b, siendo estos numeros enteros
// Input: dos numeros que a <= b
// Output: la suma de los cubos
//
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        int suma = 0;
        for (int i = a; i <= b; i++)
            suma += i * i * i;
        cout << "suma dels cubs entre " << a << " i " << b << ": " << suma << endl;
    }
}