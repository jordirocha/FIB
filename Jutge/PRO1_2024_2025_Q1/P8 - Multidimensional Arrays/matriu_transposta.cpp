//
// Created by jordy on 27/11/2024.
//
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

void transposa(Matriu &M) {
    vector<vector<int> > aux(M.size(), vector<int>(M.size()));

    for (int i = 0; i < M.size(); i++) {
        for (int j = 0; j < M.size(); j++) {
            aux[i][j] = M[j][i];
        }
    }

    M = aux;
}

int main() {
    int n;
    while (cin >> n) {
        vector<vector<int> > M(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> M[i][j];
            }
        }
        transposa(M);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << M[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
