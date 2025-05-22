//
// Programa que lee una matrices de enteros e informa de la diferencia máxima
// entre el elemento mas grande y pequeño y que matriz segun la posición
// Input: secuencia de matrices con sus tamaños
// Output: escribe la diferencia maxima y la posición de la matriz
//
#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int>> Matriu;

//
// Dada una matriz, asigna su valor maximo y minimo
// Pre: una matriz de dos dimensiones, dos naturales maximo y minimo
// Post: el valor maximo y minimo
//
void min_max(const Matriu &mat, int &max, int &min)
{
    max = mat[0][0];
    min = mat[0][0];
    for (int i = 0; i < mat.size(); i++)
        for (int j = 0; j < mat[0].size(); j++)
        {
            if (mat[i][j] > max) { max = mat[i][j]; }
            if (mat[i][j] < min) { min = mat[i][j]; }
        }
}

//
// Asigna los valores por entrada a la matriz
// Pre: una matriz de dos dimensiones, cantidad de filas y columnas
// Post: añade a cada elemento de la matriz los valores leidos por consola
//
void read(Matriu &M, int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) cin >> M[i][j];
}

//
//
// Pre:
// Post:
//
int calculate(vector<int> &data, int max, int min, int &c)
{
    int diff = max - min;
    if (diff > data[0])
    {
        data[0] = diff;
        data[1] = c;
    }
    c++;
}

int main()
{
    int n, m, c = 0;
    vector<int> data(2);
    while (cin >> n >> m)
    {
        int max, min;
        Matriu matrix(n, vector<int>(m));
        read(matrix, n, m);
        min_max(matrix, max, min);
        calculate(data, max, min, c);
    }
    cout << "la diferencia maxima es " << data[0] << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << (data[1] + 1) << endl;
}