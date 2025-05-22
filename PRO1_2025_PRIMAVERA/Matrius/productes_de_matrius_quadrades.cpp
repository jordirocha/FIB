#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;

Matriu producte(const Matriu &A, const Matriu &B)
{
    Matriu res(A.size(), vector<int>(B.size()));
    for (int i = 0; i < A.size(); i++)
        for (int j = 0; j < B.size(); j++)
            for (int k = 0; k < res.size(); k++) { res[i][j] += A[i][k] * B[k][j]; }
    return res;
}
//
// int main()
// {
//     int p, q, r;
//     while (cin >> p >> q)
//     {
//         Matriu A(p, vector<int>(q));
//         cout << p << ' ' << q << endl;
//         for (int i = 0; i < p; ++i)
//         {
//             for (int j = 0; j < q; ++j) { cout << A[i][j] << " "; }
//             cout << endl;
//         }
//         // for (int i = 0; i < p; ++i)
//         //     for (int j = 0; j < q; ++j) { cin >> A[i][j]; }
//         // cin >> r;
//         // Matriu B(q, vector<int>(r));
//         // for (int i = 0; i < q; ++i)
//         //     for (int j = 0; j < r; ++j) { cin >> B[i][j]; }
//         // Matriu C = producte(A, B);
//         for (int i = 0; i < p; ++i)
//         {
//             for (int j = 0; j < q; ++j) { cout << A[i][j] << " "; }
//             cout << endl;
//         }
//         cout << endl;
//         // for (int i = 0; i < q; ++i)
//         // {
//         //     for (int j = 0; j < r; ++j) { cout << B[i][j] << " "; }
//         //     cout << endl;
//         // }
//         // cout << endl;
//     }
// }
