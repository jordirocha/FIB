#include <iostream>
#include <vector>
using namespace std;
typedef vector<vector<int>> Matriu;

bool isIncreasing(const vector<int> &mat)
{
    int i = 1;
    while (i < mat.size() and mat[i - 1] < mat[i]) { i++; }
    return i == mat.size();
}

bool esCreixent(const Matriu &mat)
{
    int size = mat[0].size() * mat.size();
    vector<int> v(size);
    int cols = mat[0].size(), i = 0, index = 0;
    while (i < cols)
    {
        for (int j = 0; j < mat.size(); j++) { v[index++] = mat[j][i]; }
        i++;
        if (i < cols)
        {
            for (int j = mat.size() - 1; j >= 0; j--) { v[index++] = mat[j][i]; }
            i++;
        }
    }
    return isIncreasing(v);
}

int main()
{
    int n, m, k = 1;
    while (cin >> n >> m)
    {
        Matriu mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) cin >> mat[i][j];
        cout << "matriu " << k++ << ": ";
        if (esCreixent(mat)) { cout << "si" << endl; }
        else { cout << "no" << endl; }
    }
}
