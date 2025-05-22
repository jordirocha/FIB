#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef vector<vector<int>> Matriu;
typedef vector<int> Row;

bool horizontal(const Matriu &m)
{
    bool isCorrect = true;
    int i          = 0;
    while (isCorrect and i < 9)
    {
        int suma = 0;
        for (int j = 0; j < 9; j++) { suma += m[i][j]; }
        if (suma != 45) { isCorrect = false; }
        else { i++; }
    }
    return isCorrect;
}

bool vertical(const Matriu &m)
{
    bool isCorrect = true;
    int i          = 0;
    while (isCorrect and i < 9)
    {
        int suma = 0;
        for (int j = 0; j < 9; j++) { suma += m[j][i]; }
        if (suma != 45) { isCorrect = false; }
        else { i++; }
    }
    return isCorrect;
}

bool subGrid(const Matriu &m)
{
    for (int i = 0; i < 9; i += 3)
    {
        for (int j = 0; j < 9; j += 3)
        {
            int sum = 0;
            for (int k = i; k < i + 3; k++)
            {
                for (int l = j; l < j + 3; l++) sum += m[k][l];
                // cout << endl;
            }
            if (sum != 45) return false;
            // cout << endl;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Matriu M(9, Row(9));
        for (int k = 0; k < 9; ++k)
            for (int j = 0; j < 9; ++j) { cin >> M[k][j]; }
        if (subGrid(M) and horizontal(M) and vertical(M)) { cout << "si" << endl; }
        else { cout << "no" << endl; }
    }
}
