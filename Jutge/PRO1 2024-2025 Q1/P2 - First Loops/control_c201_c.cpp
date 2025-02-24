//
// Created by jordy on 20/02/2025.
//
#include <iostream>

using namespace std;

int main()
{
    int a, b, multiples = 0;

    cin >> a;

    while (cin >> b)
    {
        if (b == 0)
            multiples++;
        else if (b % a == 0)
            multiples++;
    }

    cout << multiples << endl;
}
