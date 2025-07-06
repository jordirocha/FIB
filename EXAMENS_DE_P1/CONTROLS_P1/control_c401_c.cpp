#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;

void print(const Matriu &v)
{
    int row = v.size(), col = v[0].size();
    cout << "-----" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << v[i][j];
            if (j != col - 1) cout << " ";
        }
        cout << endl;
    }
}

void intercanvia(Matriu &mat, int j, int k)
{
    vector<int> temp(mat.size());
    for (int i = 0; i < mat.size(); i++)
    {
        temp[i]   = mat[i][j];
        mat[i][j] = mat[i][k];
    }
    for (int i = 0; i < temp.size(); i++) { mat[i][k] = temp[i]; }
}

int main()
{
    int n, m, j, k;
    cin >> n >> m;
    Matriu mat(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) cin >> mat[i][j];
    print(mat);
    while (cin >> j >> k)
    {
        intercanvia(mat, j, k);
        print(mat);
    }
    cout << "-----" << endl;
}
