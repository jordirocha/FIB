//
// Programa que traspone una matriz
// Input: un entero con filas y columnas y los elementos de la matriz
// Output: la matriz transpuesta
//
#include <iostream>
#include <vector>
using namespace std;
typedef vector<vector<int>> Matriu;
typedef vector<int> Row;

void swap(Matriu &M, int i, int j)
{
    int temp = M[j][i];
    M[j][i]  = M[i][j];
    M[i][j]  = temp;
}

//
// Transforma la matriz a su traspuesta
// Pre: una matriz de dos dimensiones rellena
// Post: la traspuesta de la matriz
//
void transposa(Matriu &M)
{
    int size = M.size();
    for (int i = 0; i < size; ++i)
        for (int j = i + 1; j < size; ++j) { swap(M, i, j); }
}

int main()
{
    int n;
    while (cin >> n)
    {
        Matriu M(n, Row(n));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j) { cin >> M[i][j]; }
        transposa(M);
        for (int i = 0; i < M.size(); ++i)
        {
            for (int j = 0; j < M.size(); ++j) { cout << M[i][j] << " "; }
            cout << endl;
        }
        cout << endl;
    }
}