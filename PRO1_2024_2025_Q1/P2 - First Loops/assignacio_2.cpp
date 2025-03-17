//
// Created by jordy on 21/02/2025.
//
#include <iostream>

using namespace std;

int main()
{
    int d, n, t, a;
    int semana = 0;

    cin >> d >> n >> t;

    while (t > 0)
    {
        cin >> a;
        n = (n + a) - d;
        if (n > 0)
            semana++;
        t--;
    }

    cout << semana << endl;
}