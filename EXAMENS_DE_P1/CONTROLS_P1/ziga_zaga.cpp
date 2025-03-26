#include <iostream>
#include <vector>
using namespace std;
typedef vector<vector<int>> Matriu;

bool esCreixent(const Matriu &mat)
{

    int rows = mat.size(), cols = mat[0].size(), i = 0;
    while (i < cols)
    {
        for (int j = 0; j < rows; j++) { cout << mat[j][i] << endl; }
        cout << endl;
        i++;
    }

    return false;
}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        Matriu mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) cin >> mat[i][j];

        esCreixent(mat);
        // cout << suma_diagonals(num) << endl;
        // cout << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++) { cout << num[i][j] << ' '; }
        //     cout << endl;
        // }
    }
}
