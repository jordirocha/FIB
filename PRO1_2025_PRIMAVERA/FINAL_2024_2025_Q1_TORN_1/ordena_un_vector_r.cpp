#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

void escriu_vector(const vector<int> &v) {
    for (int i = 0; i < v.size(); i++) { cout << v[i] << " "; }
    cout << endl;
}

/**
 * Llegeix un vector d'enters de forma més ràpida
 */
vector<int> llegeix_vector(int tamany) {
    string buit, linia;
    getline(cin, buit);
    getline(cin, linia);
    istringstream iss(linia);
    vector<int> v(tamany);
    for (int i = 0; i < tamany; ++i) { iss >> v[i]; }
    return v;
}

void invertir(vector<int> &v, int start, int end) {
    int limit = (end - start) / 2;
    for (int i = 0; i < limit; i++) {
        int temp = v[end - i - 1];
        v[end - i - 1] = v[start + i];
        v[start + i] = temp;
    }


    // Funció auxiliar per invertir una part del vector
    // void reverse(vector<int> &v, int start, int end) {
    //     while (start < end) {
    //         swap(v[start], v[end]);
    //         ++start;
    //         --end;
    //     }
    // }
}

/*
 * PRE:  v és un vector R, i pos és la posició de y_1 a v.
 * POST: v està ordenat.
 */
void ordena(vector<int> &v, int pos) {
    invertir(v, 0, pos);
    invertir(v, pos, v.size());
    invertir(v, 0, v.size());
}

int main() {
    int n;
    while (cin >> n) {
        /* n >= 3 */
        vector<int> v = llegeix_vector(n);
        int pos;
        cin >> pos; /* posició de y_1 */
        ordena(v, pos);
        escriu_vector(v);
    }
}
