#include <iostream>
#include <vector>
using namespace std;

int posicio(double x, const vector<double> &v, int esq, int dre)
{
    int pos;
    bool trobat = false;
    while (not trobat and esq <= dre)
    {
        pos = (esq + dre) / 2; // posicio central de v[esq..dre]
        if (x < v[pos]) { dre = pos - 1; }
        else if (x > v[pos]) { esq = pos + 1; }
        else { trobat = true; }
    }
    if (trobat) return pos;
    return -1;
}

// int main()
// {
//     int n;
//     while (cin >> n)
//     {
//         vector<double> V(n);
//         for (int i = 0; i < n; ++i) cin >> V[i];
//         int t;
//         cin >> t;
//         while (t--)
//         {
//             double x;
//             int esq, dre;
//             cin >> x >> esq >> dre;
//             cout << posicio(x, V, esq, dre) << endl;
//         }
//     }
//     return 0;
// }
