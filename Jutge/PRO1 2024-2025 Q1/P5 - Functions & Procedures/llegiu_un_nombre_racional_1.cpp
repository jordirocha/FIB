//
// Created by jordy on 13/02/2025.
//
#include <iostream>

using namespace std;

void read_rational(int &num, int &den);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int num, den;
        read_rational(num, den);
        cout << num << ' ' << den << endl;
    }
    return 0;
}

void read_rational(int &num, int &den) {
    string rational, numerator, denominator;
    cin >> rational;

    int i;
    for (i = 0; i < rational.length() and rational[i] != '/'; i++) numerator += rational[i];

    int j;
    for (j = i + 1; j < rational.length(); j++) denominator += rational[j];

    num = stoi(numerator);
    den = stoi(denominator);
    int copyNum = num, copyDen = den;
    bool isReducible = true;

    if (num > den) {
        int aux = num;
        copyNum = den;
        copyDen = aux;
    }

    int divisor = copyNum;
    while (isReducible and divisor > 0) {
        if (copyNum % divisor == 0 and copyDen % divisor == 0) {
            num = num / divisor;
            den = den / divisor;
            isReducible = false;
        }
        divisor--;
    }
}
