//
// Created by jordy on 22/03/2025.
//
#include <iostream>
using namespace std;
bool es_ascendent(int n)
{
    int d1   = n % 10;
    n        = n / 10;
    bool asc = true;
    while (asc and n > 0)
    {
        int d2 = n % 10;
        if (d1 == 0 and d2 != 9) { asc = false; }
        else if ((d1 != 0 and d2 != 9) and (d1 - d2) != 1) { asc = false; }
        n  = n / 10;
        d1 = d2;
    }
    return asc;
}

int main()
{
    int x, counter = 0;
    while (counter < 2 and cin >> x)
        if (es_ascendent(x)) counter++;
    if (counter == 2) { cout << "SI" << endl; }
    else { cout << "NO" << endl; }
}
