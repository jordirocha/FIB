#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef vector<int> Row;
typedef vector<Row> Matrix;
int main()
{
    int n, m;
    cin >> n >> m;
    Matrix id = Matrix(n, Row(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) { cin >> id[i][j]; }
    string ins;
    while (cin >> ins)
    {
        int i, j;
        if (ins == "fila")
        {
            cin >> i;
            cout << "fila " << i << ":";
            for (j = 0; j < m; j++) cout << ' ' << id[i - 1][j];
        }
        else if (ins == "columna")
        {
            cin >> j;
            cout << "columna " << j << ":";
            for (int k = 0; k < n; k++) cout << ' ' << id[k][j - 1];
        }
        else
        {
            cin >> i >> j;
            cout << "element " << i << ' ' << j << ":";
            cout << ' ' << id[i - 1][j - 1];
        }
        cout << endl;
    }
}