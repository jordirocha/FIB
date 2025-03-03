//
// Created by jordy on 27/11/2024.
//
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

void mostrar_producto(const vector<int> &A, const vector<int> &B) {
    cout << "para esta posición:" << endl;
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << " * " << B[i] << endl;
    }

    // for (int i = 0; i < B.size(); i++) {
    //     cout << B[i] << endl;
    // }
}

Matriu producte(const Matriu &A, const Matriu &B) {
    int i_a_mul = 0;
    int j_a_mul = 0;
    int size = A.size();
    int veces_multiplicar = size;

    Matriu product(size, vector<int>(size));
    vector<int> fila(size);
    vector<int> columna(size);

    // for (int i = 0; i < veces_multiplicar; i++) {
    //     fila[i] = A[0][i];
    //        }

    for (int i = 0; i < veces_multiplicar; i++) {
        columna[i] = B[i][0];
    }

    for (int i = 0; i < size; i++) {
        for (int t = 0; t < veces_multiplicar; t++) {
            fila[t] = A[i][t];
        }

        for (int j = 0; j < size; j++) {

            for (int k = 0; k < veces_multiplicar;k++) {
                columna[k] = B[k][j];
            }

            mostrar_producto(fila, columna);
        }
    }

    mostrar_producto(fila, columna);

    // int size = A.size();
    // int suma = 0;
    // int j = 0;
    // Matriu D(size, vector<int>(size));
    //
    // for (int i = 0; i < size; i++) {
    //     for (int k = 0; k < size; k++) {
    //         for (j; j < size; j++) {
    //             suma += A[i][j] * B[j][i];
    //         }
    //         D[i][k] = suma;
    //     }
    // }


    return product;
}

int main() {
    int n;
    while (cin >> n) {
        Matriu A(n, vector<int>(n));
        Matriu B(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> A[i][j];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> B[i][j];
            }
        }
        Matriu C = producte(A, B);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
