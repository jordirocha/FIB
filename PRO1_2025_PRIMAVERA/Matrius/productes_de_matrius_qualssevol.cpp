#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;

Matriu producte(const Matriu &A, const Matriu &B)
{
    Matriu res(A.size(), vector<int>(B[0].size()));
    for (int i = 0; i < A.size(); ++i)
        for (int j = 0; j < B[0].size(); ++j)
            for (int l = 0; l < B.size(); ++l) { res[i][j] += A[i][l] * B[l][j]; }
    return res;
}

// int main()
// {
//     int p, q, r, s;
//     while (cin >> p >> q)
//     {
//         Matriu A(p, vector<int>(q));
//         for (int i = 0; i < p; ++i)
//             for (int j = 0; j < q; ++j) { cin >> A[i][j]; }
//
//         cin >> r >> s;
//         Matriu B(r, vector<int>(s));
//         for (int i = 0; i < r; ++i)
//             for (int j = 0; j < s; ++j) { cin >> B[i][j]; }
//
//         // for (int i = 0; i < r; ++i)
//         // {
//         //     for (int j = 0; j < s; ++j) { cout << B[i][j] << " "; }
//         //     cout << endl;
//         // }
//
//         Matriu C = producte(A, B);
//         for (int i = 0; i < C.size(); ++i)
//         {
//             for (int j = 0; j < C[0].size(); ++j) { cout << C[i][j] << " "; }
//             cout << endl;
//         }
//         cout << endl;
//     }
// }
