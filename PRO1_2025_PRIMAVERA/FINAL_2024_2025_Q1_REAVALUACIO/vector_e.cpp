#include <cassert>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Donat un vector esglaó, busca la posició de
 * l'element just passat l'esglaó (la primera 'y').
 *
 * @pre v = [x, ...(n)..., x, x, y, ...(m)..., y, y]
 *      amb n, m >= 1, 'x' diferent de 'y', i enters.
 *
 * @returns La posició de la primera 'y'.
 */
int busca_esglao(const vector<int> &v) {
    int i = 1;
    int posicion = 0;
    bool match = false;
    while (not match and i < v.size()) {
        posicion++;
        if (v[i - 1] != v[i]) { match = true; }
        i++;
    }
    return posicion;
}

vector<int> llegeix_vector(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}

int main() {
    std::ios_base::sync_with_stdio(false);

    int n;
    while (cin >> n) {
        vector<int> v = llegeix_vector(n);

        int pos;
        for (int i = 0; i < 2000; i++) {
            // Temps ⨉ 2000 perquè es noti més al Jutge
            pos = busca_esglao(v);
        }
        cout << pos << endl;
    }
    return 0;
}
