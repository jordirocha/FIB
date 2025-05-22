//
// Programa que lee una matriz y despues escribe las filas y columnas que se piden
// Input: una matriz y seguido de las filas, columnas o elementos
// Output: escribe una fila, columna o elemento
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

//
// Asigna los valores por entrada a la matriz
// Pre: una matriz de dos dimensiones, cantidad de filas y columnas
// Post: añade a cada elemento de la matriz los valores leidos por consola
//
void read(Matrix &M, int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) { cin >> M[i][j]; }
}

//
//
// Pre: una matriz y seguido de las filas, columnas
// Post: escribe una fila, columna o elemento
//
void calculate(Matrix &M, int m, int n)
{
    string ins;
    while (cin >> ins)
    {
        int i, j;
        if (ins == "fila")
        {
            cin >> i;
            cout << "fila " << i << ':';
            for (j = 0; j < m; j++) cout << ' ' << M[i - 1][j];
        }
        else if (ins == "columna")
        {
            cin >> j;
            cout << "columna " << j << ':';
            for (int k = 0; k < n; k++) cout << ' ' << M[k][j - 1];
        }
        else
        {
            cin >> i >> j;
            cout << "element " << i << ' ' << j << ':';
            cout << ' ' << M[i - 1][j - 1];
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    Matrix id = Matrix(n, Row(m));
    read(id, n, m);
    calculate(id, n, m);
}