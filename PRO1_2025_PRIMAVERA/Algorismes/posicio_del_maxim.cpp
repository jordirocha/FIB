#include <iostream>
#include <vector>
using namespace std;

int posicio_maxim(const vector<double> &v, int m)
{
    int pos = 0, maxim = v[0];
    for (int i = 0; i <= m; i++)
    {
        if (v[i] > maxim)
        {
            pos   = i;
            maxim = v[i];
        }
    }
    return pos;
}

int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        vector<double> V(n);
        for (int i = 0; i < n; ++i) cin >> V[i];
        cout << posicio_maxim(V, m) << endl;
    }
}
