#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;

Matriu producte(const Matriu &A, const Matriu &B)
{
    for (int i = 0; i < A.size(); i++)
    {
        // int col = i;
        for (int j = 0; j < B.size(); j++)
        {
            cout << A[i][j] << " * " << B[j][i] << endl;

            // segunda matriz
            int col = 0;

            for (int k = 0; k < B.size(); k++) {}

            // col++;
        }
    }
    return A;
}

int main()
{
    int n;
    while (cin >> n)
    {
        Matriu A(n, vector<int>(n));
        Matriu B(n, vector<int>(n));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j) { cin >> A[i][j]; }
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j) { cin >> B[i][j]; }
        Matriu C = producte(A, B);
        // for (int i = 0; i < n; ++i)
        // {
        //     for (int j = 0; j < n; ++j) { cout << C[i][j] << " "; }
        //     cout << endl;
        // }
        // cout << endl;
    }
}
