#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> Row;
typedef vector<Row> Matrix;

// Pre: La matriz no está vacía.
// Post: Los elementos de la matriz almacenan los valores introducidos por consola.
void readData(Matrix &matrix) {
    int rows = matrix.size();
    int columns = matrix[0].size();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }
}

// Pre: La matriz tiene dimensiones n*m (1 ≤ n ≤ 100) y (1 ≤ m ≤ 100), un índice i, j >= 0 y k (1 ≤ k ≤ min(n, m)).
// Post: Retorna un vector de dos posiciones: la posición cero almacena el valor de la suma de todas las densidades del subcuadrado, y la posición uno almacena el valor máximo de densidad del subcuadrado.
vector<int> getDataOfCriticalZones(const Matrix &matrix, int i, int j, int k) {
    // tanto i y j nos indican desde donde empezar para leer nuestra submatriz k*k
    // tanto maxColumn y maxRow nos indican los límites hasta donde leer de la matriz
    int maxColumn = j + k, maxRow = i + k, sumOfAlienDensities = 0, maxDensityInSubSquare = matrix[i][j];
    for (int l = i; l < maxRow; l++) {
        for (int m = j; m < maxColumn; m++) {
            sumOfAlienDensities += matrix[l][m];
            if (matrix[l][m] > maxDensityInSubSquare) maxDensityInSubSquare = matrix[l][m];
        }
    }
    // creamos el vector de resultados y a su vez le asignamos los dos valores
    vector<int> results({sumOfAlienDensities, maxDensityInSubSquare});
    return results;
}

int main() {
    int n, m;
    cin >> n; // n lo uso para leer el valor de las filas y para terminar el programa, por eso hago una primera lectura
    bool loopContinues = (n != 0); // si no es 0, entonces es una fila, en caso contrario no realizamos nada
    while (loopContinues) {
        cin >> m;
        Matrix spatialZones(n, Row(m));
        readData(spatialZones);
        int k;
        cin >> k;
        Matrix criticalZones(k, Row(k));
        int maxSumOfAlienDensities = 0, maxDensityInSubSquare = 0, x = 0, y = 0;
        for (int i = 0; (i + k) <= n; i++) {
            for (int j = 0; (j + k) <= m; j++) {
                Row dataOfCriticalZones = getDataOfCriticalZones(spatialZones, i, j, k);
                if (dataOfCriticalZones[0] > maxSumOfAlienDensities) {
                    maxSumOfAlienDensities = dataOfCriticalZones[0];
                    maxDensityInSubSquare = dataOfCriticalZones[1];
                    x = i;
                    y = j;
                }
            }
        }
        cout << "(" << x << "," << y << ")" << maxSumOfAlienDensities << endl << maxDensityInSubSquare << endl;
        cin >> n; // repito lo mismo antes de iniciar el bucle
        loopContinues = (n != 0);
    }
}