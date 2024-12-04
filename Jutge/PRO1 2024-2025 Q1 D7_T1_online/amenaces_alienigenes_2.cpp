//
// Created by jordy on 02/12/2024.
//
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

int main() {
    int n, m;
    bool loopContinues = true;

    cin >> n;

    loopContinues = (n != 0);

    while (loopContinues) {
        int sumOfAlienDensities = -1, maxDensityInSubsquare = 0;
        cin >> m;

        Matrix spatialZones(n, Row(m));
        readData(spatialZones);

        int k;
        cin >> k;

        Matrix criticalZones(k, Row(k));

        int column = 0;
        int row = 0;

        int initialRowPosition = 0;
        int initialColumnPosition = 0;

        Row coordinates(2);

        bool shouldContinue = true;

        while (shouldContinue) {

            row = initialRowPosition;
            for (int i = 0; i < k; i++) {
                column = initialColumnPosition;
                for (int j = 0; j < k; j++) {
                    criticalZones[i][j] = spatialZones[row][column];
                    column++;
                }
                row++;
            }

            int xCoordinate = (row - 1) - (k - 1);
            int yCoordinate = (column - 1) - (k - 1);

            bool isEndOfVerticalTraversal = (column - 1) == (m - 1);
            bool isEndOfHorizontalTraversal = isEndOfVerticalTraversal and (row - 1) == (n - 1);

            if (isEndOfVerticalTraversal) {
                initialRowPosition++;
                initialColumnPosition = 0;
            } else {
                initialColumnPosition++;
            }

            if (isEndOfHorizontalTraversal) shouldContinue = false;

            int currentSumOfAlienDensities = 0;
            int currentMaxDensityInSubsquare = criticalZones[0][0];

            for (int i = 0; i < k; i++) {
                for (int j = 0; j < k; j++) {
                    currentSumOfAlienDensities += criticalZones[i][j];
                    if (criticalZones[i][j] > currentMaxDensityInSubsquare) {
                        currentMaxDensityInSubsquare = criticalZones[i][j];
                    }
                }
            }

            if (currentSumOfAlienDensities > sumOfAlienDensities) {
                sumOfAlienDensities = currentSumOfAlienDensities;
                maxDensityInSubsquare = currentMaxDensityInSubsquare;
                coordinates[0] = xCoordinate;
                coordinates[1] = yCoordinate;
            }
        }

        cout << "(" << coordinates[0] << "," << coordinates[1] << ")" << endl;
        cout << sumOfAlienDensities << endl;
        cout << maxDensityInSubsquare << endl;

        cin >> n;
        loopContinues = (n != 0);
    }
}
