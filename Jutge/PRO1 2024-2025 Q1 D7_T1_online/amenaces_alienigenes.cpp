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

vector<int> getSpatialZonesData(const Matrix &matrix, int i, int j, int k) {
    int sumOfAlienDensities = 0;
    int maxDensityInSubsquare = -1;
    Row dataOfCriticalZones(2);

    int rowIndex = i;
    for (int t = 0; t < k; t++) {
        int columnIndex = j;
        for (int m = 0; m < k; m++) {
            sumOfAlienDensities += matrix[rowIndex][columnIndex];
            if (matrix[rowIndex][columnIndex] > maxDensityInSubsquare)
                maxDensityInSubsquare = matrix[rowIndex][columnIndex];
            columnIndex++;
        }
        rowIndex++;
    }

    dataOfCriticalZones[0] = sumOfAlienDensities;
    dataOfCriticalZones[1] = maxDensityInSubsquare;

    return dataOfCriticalZones;
}

int main() {
    int n, m;
    bool loopContinues = true;

    cin >> n;
    loopContinues = (n != 0);

    while (loopContinues) {
        int maxSumOfAlienDensities = -1, maxDensityInSubsquare = 0;
        cin >> m;

        Matrix spatialZones(n, Row(m));
        readData(spatialZones);

        int k;
        cin >> k;

        Matrix criticalZones(k, Row(k));

        int initialRowPosition = 0, initialColumnPosition = 0;
        Row coordinates(2);
        Row dataOfCriticalZones(2);

        bool shouldContinue = true;
        while (shouldContinue) {
            dataOfCriticalZones = getSpatialZonesData(spatialZones, initialRowPosition, initialColumnPosition, k);

            if (dataOfCriticalZones[0] > maxSumOfAlienDensities) {
                maxSumOfAlienDensities = dataOfCriticalZones[0];
                maxDensityInSubsquare = dataOfCriticalZones[1];
                coordinates[0] = initialRowPosition;
                coordinates[1] = initialColumnPosition;
            }

            if ((initialColumnPosition + (k - 1)) == (m - 1)) {
                initialRowPosition++;
                initialColumnPosition = 0;
            } else {
                initialColumnPosition++;
            }

            if ((initialRowPosition + (k - 1)) == n) shouldContinue = false;
        }

        cout << "(" << coordinates[0] << "," << coordinates[1] << ")" << endl;
        cout << maxSumOfAlienDensities << endl;
        cout << maxDensityInSubsquare << endl;

        cin >> n;
        loopContinues = (n != 0);
    }
}
