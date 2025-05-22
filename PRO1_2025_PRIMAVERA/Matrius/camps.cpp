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
// Asigna los valores por entrada a la matriz
// Pre: una matriz de dos dimensiones, cantidad de filas y columnas
// Post: añade a cada elemento de la matriz los valores leidos por consola
//
void read(Matriu &M, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) cin >> M[i][j];
}

//
//
// Pre:
// Post:
//
void calculate(Matriu &data, int &camps)
{
    int rows = data.size();
    int cols = data[0].size();
    for (int i = 0; i < rows; i++)
    {
        bool isField = false;
        for (int j = 0; j < cols; j++)
        {
            if (data[i][j] != 0)
            {
                if (not isField)
                {
                    camps++;
                    isField = true;
                }
                data[i][j] = 0;
            }
            else
            {
                cout << "se ha detectado final del campo" << endl;

                int n;
                cin >> n;
            }
        }
    }
}

int main()
{
    int rows, columns, camps = 0;
    while (cin >> rows >> columns)
    {
        Matriu matrix(rows, vector<int>(columns));
        read(matrix, rows, columns);
        calculate(matrix, camps);
    }
    // cout << "la diferencia maxima es " << data[0] << endl;
    // cout << "la primera matriu amb aquesta diferencia es la " << (data[1] + 1) << endl;
}