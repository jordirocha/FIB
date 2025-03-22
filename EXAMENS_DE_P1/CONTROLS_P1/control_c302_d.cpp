//
// Created by jordy on 22/03/2025.
//
#include <iostream>
using namespace std;
int compara(int d1, int m1, int a1, int d2, int m2, int a2)
{
    if (a1 > a2) { return 1; }
    if (a2 > a1) { return -1; }
    int f1 = d1 + m1;
    int f2 = d2 + m2;
    if (f1 > f2) { return 1; }
    if (f1 < f2) { return -1; }
    return 0;
}

int main()
{
    int d1, m1, a1, d2, m2, a2;
    char d = '/';
    while (cin >> d1 >> d >> m1 >> d >> a1 and cin >> d2 >> d >> m2 >> d >> a2)
    {
        int r = compara(d1, m1, a1, d2, m2, a2);
        if (r == 0) { cout << "iguals" << endl; }
        else if (r == 1) { cout << "posterior" << endl; }
        else { cout << "anterior" << endl; }
    }
}
