#include <iostream>
#include <vector>
using namespace std;

bool putCorners(vector<vector<char>> v)
{
    // arriba y debajo
    // for (int j = 0; j < v[0].size(); j++) { v[0][j] = '*'; }
    // for (int j = 0; j < v[0].size(); j++) { v[v.size() - 1][j] = '*'; }
    // lados
    // for (int j = 0; j < v.size(); j++) { v[j][0] = '*'; }
    // for (int j = 0; j < v[0].size(); j++) { v[j][v[0].size() - 1] = '*'; }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = 0; j < v[0].size(); j++) { cout << v[i][j]; }
    //     cout << endl;
    // }
}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        vector<vector<char>> v(n, vector<char>(m));
        putCorners(v);
    }
}
