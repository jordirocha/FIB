//
// Created by jordy on 22/03/2025.
//
#include <iostream>
using namespace std;
char complement(char c)
{
    if (c == 'A') return 'T';
    if (c == 'T') return 'A';
    if (c == 'C') return 'G';
    return 'C';
}

int main()
{
    char c1 = '-', c2 = '-', c3 = '-';
    bool found = false;
    while (cin >> c3)
    {
        if (found) { cout << complement(c3); }
        else if (c1 == 'T' and c2 == 'A' and c3 == 'G') { found = true; }
        c1 = c2;
        c2 = c3;
    }
    cout << endl;
}
