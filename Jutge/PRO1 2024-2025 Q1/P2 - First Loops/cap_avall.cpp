//
// Created by jordy on 23/02/2025.
//
#include <iostream>

using namespace std;

int main()
{
    int x, y, max, min;

    cin >> x >> y;

    max = x;
    min = y;

    if (y > max)
    {
        max = y;
        min = x;
    }

    for (int i = max; i >= min; i--)
        cout << i << endl;
}