#include <cassert>
#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Ordena un vector "cremallera" format per elements entrellaçats, retornant
 * el vector resultat.
 *
 * @returns Un vector amb els elements de v ordenats de menor a major.
 *
 * @pre v = {x_1, y_1, x_2, y_2, ..., x_n, y_n}, n > 0.
 *      x_i < x_{i+1}, y_i < y_{i+1}, ∀i.
 */
vector<double> ordena_cremallera(const vector<double> &v) {
    int i = 0, j = 1, k = 0, size = v.size();
    vector<double> temp(size, 0);
    while (i < size and j < size) {
        if (v[i] < v[j]) {
            temp[k] = v[i];
            i += 2;
        } else {
            temp[k] = v[j];
            j += 2;
        }
        k++;
    }
    while (i < size) {
        temp[k] = v[i];
        i += 2;
        k++;
    }
    while (j < size) {
        temp[k] = v[j];
        j += 2;
        k++;
    }
    return temp;
}

//
// vector<double> llegeix_vector(int n) {
//     vector<double> v(n);
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }
//     return v;
// }
//
// int main() {
//     std::ios_base::sync_with_stdio(false);
//
//     int n;
//     while (cin >> n) {
//         vector<double> cremallera = llegeix_vector(n);
//         vector<double> resultat;
//         resultat = ordena_cremallera(cremallera);
//         for (int i = 0; i < resultat.size(); i++) {
//             cout << resultat[i] << ' ';
//         }
//         cout << endl;
//     }
//     return 0;
// }
