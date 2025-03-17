//
// Created by jordy on 19/02/2025.
//

#include <iostream>

using namespace std;

void info_sequencia(int &suma, int &ultim) {
    int x, y;
    bool canReadInput = true;
    cin >> x;
    suma += x;
    while (canReadInput and x > 0) {
        cin >> y;
        suma += y;
        if (y == 0) {
            ultim = x;
            canReadInput = false;
        }
        x = y;
    }
}

int main() {
    bool readLastDigit = false, hasFinished = false;
    int lastDigit = 0, firstSequenceSuma = 0, similarsSequences = 1;

    while (not hasFinished) {
        int suma = 0;
        int ultim = 0;

        info_sequencia(suma, ultim);

        if (not readLastDigit) {
            firstSequenceSuma = suma;
            lastDigit = ultim;
            readLastDigit = true;
        } else {
            if (suma == firstSequenceSuma and ultim == lastDigit) similarsSequences++;
        }

        hasFinished = (suma == 0 and ultim == 0);
    }

    cout << similarsSequences << endl;
}


