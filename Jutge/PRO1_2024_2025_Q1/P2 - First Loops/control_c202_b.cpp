//
// Created by jordy on 23/02/2025.
//
#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(2);

    int n;
    cin >> n;

    double a1 = .0, b1 = .0, a2 = .0, b2 = .0;

    for (int i = 0; i < n; i++)
    {
        double m;
        cin >> m;
        b1 += m * m;
        b2 += m;
    }

    a1 = b1 / (n - 1);
    a2 = (b2 * b2) / (n * (n - 1));

    cout << (a1 - a2) << endl;
}