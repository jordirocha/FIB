//
// Created by jordy on 22/03/2025.
//
#include <iostream>
#include <vector>
using namespace std;
typedef vector<vector<int>> Matriu;

int suma_diagonals(const Matriu &mat)
{
    int d1 = 0, d2 = 0;
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            if (i == j) { d1 += mat[i][j]; }
            else if (j == mat.size() - 1 - i) { d2 += mat[i][j]; }
        }
    }
    return d1 + d2;
}

int main()
{
    int x;
    while (cin >> x)
    {
        Matriu num(x, vector<int>(x));
        for (int i = 0; i < x; i++)
            for (int j = 0; j < x; j++) cin >> num[i][j];
        cout << suma_diagonals(num) << endl;
    }
}
