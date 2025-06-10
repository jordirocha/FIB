#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int>> Matriu;

void llegeixMatriu(Matriu &m, int n)
{ /* m matriu quadrada */
    m = Matriu(n, vector(n, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> m[i][j];
}

/*
 * PRE: m una matriu N x N i 0 <= x < N/2 + (N mod 2).
 * POST: Torna la suma dels elements del marc x d'M.
 */
int sumaMarc(const Matriu &m, int x)
{
    int sum = 0, lastColumn = m[0].size() - 1, lastRow = m.size() - 1;
    for (int i = x; i < m.size() - x; i++) { sum += m[x][i]; }
    for (int i = 1 + x; i < m.size() - x; i++) { sum += m[i][x]; }
    for (int i = 1 + x; i < m.size() - x; i++) { sum += m[lastRow - x][i]; }
    for (int i = 1 + x; i < m.size() - 1 - x; i++) { sum += m[i][lastColumn - x]; }
    return sum;
}

int main()
{
    int n = 0;
    cin >> n;
    Matriu m;
    llegeixMatriu(m, n);
    int x;
    while (cin >> x)
    {
        int s = sumaMarc(m, x);
        cout << "El marc " << x << " suma " << s << endl;
    }
}
