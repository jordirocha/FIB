#include <iostream>
#include <vector>
using namespace std;
typedef vector<vector<int>> Matriu;
typedef vector<int> Row;
void transposa(Matriu &M)
{
    for (int i = 0; i < M.size(); ++i)
    {
        for (int j = 0; j < M.size(); ++j)
        {
            if (j > i)
            {
                int temp = M[j][i];
                M[j][i]  = M[i][j];
                M[i][j]  = temp;
            }
        }
    }
}
int main()
{
    int n;
    while (cin >> n)
    {
        Matriu M(n, Row(n));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j) { cin >> M[i][j]; }
        transposa(M);
        for (int i = 0; i < M.size(); ++i)
        {
            for (int j = 0; j < M.size(); ++j) { cout << M[i][j] << " "; }
            cout << endl;
        }
        cout << endl;
    }
}