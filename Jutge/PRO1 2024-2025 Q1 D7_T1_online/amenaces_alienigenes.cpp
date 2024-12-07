#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> Row;
typedef vector<Row> Matrix;

void readData(Matrix &matrix) {
    int rows = matrix.size();
    int columns = matrix[0].size();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }
}

vector<int> getSpatialZonesData(const Matrix &matrix, int i, int j, int const k) {
    int maxColumn = j + k, maxRow = i + k, sumOfAlienDensities = 0, maxDensityInSubSquare = -1;
    for (int l = i; l < maxRow; l++) {
        for (int m = j; m < maxColumn; m++) {
            sumOfAlienDensities += matrix[l][m];
            if (matrix[l][m] > maxDensityInSubSquare) maxDensityInSubSquare = matrix[l][m];
        }
    }
    vector<int> results({sumOfAlienDensities, maxDensityInSubSquare});
    return results;
}

int main() {
    int n, m;
    cin >> n;
    bool loopContinues = (n != 0);
    while (loopContinues) {
        cin >> m;
        int maxSumOfAlienDensities = -1, maxDensityInSubSquare = 0;
        Matrix spatialZones(n, Row(m));
        readData(spatialZones);
        int k;
        cin >> k;
        Matrix criticalZones(k, Row(k));
        int x = 0, y = 0;
        Row dataOfCriticalZones(2);

        for (int i = 0; (i + k) <= n; i++) {
            for (int j = 0; (j + k) <= m; j++) {
                dataOfCriticalZones = getSpatialZonesData(spatialZones, i, j, k);
                if (dataOfCriticalZones[0] > maxSumOfAlienDensities) {
                    maxSumOfAlienDensities = dataOfCriticalZones[0];
                    maxDensityInSubSquare = dataOfCriticalZones[1];
                    x = i;
                    y = j;
                }
            }
        }

        cout << "(" << x << "," << y << ")" << endl;
        cout << maxSumOfAlienDensities << endl << maxDensityInSubSquare << endl;
        cin >> n;
        loopContinues = (n != 0);
    }
}
