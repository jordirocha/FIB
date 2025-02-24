//
// Created by jordy on 21/02/2025.
//
#include <iostream>

using namespace std;

int main()
{
    int a, b;

    while (cin >> a >> b)
    {
        int suma = 0;

        if (a <= b)
            suma = a * a * a;

        for (int i = a + 1; i <= b; i++)
            suma += i * i * i;

        cout << "suma dels cubs entre " << a << " i " << b << ": " << suma << endl;
    }
}