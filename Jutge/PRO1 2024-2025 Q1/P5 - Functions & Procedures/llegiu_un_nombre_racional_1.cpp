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

    bool isReducible = true;

    int copyNum = stoi(numerator);
    int copyDen = stoi(denominator);
    num = copyNum;
    den = copyDen;

    if (num > den) {
        int aux = copyNum;
        copyNum = copyDen;
        copyDen = aux;
    }

    int mcd = 1;
    int divisor = copyNum;
    while (isReducible and divisor > 0) {
        if (copyNum % divisor == 0 and copyDen % divisor == 0) {
            mcd = divisor;
            isReducible = false;
        } else {
            divisor--;
        }
    }

    num = num / mcd;
    den = den / mcd;

    // cout << num << ' ' << den << ", su mcd: " << mcd << endl;

    //
    // bool isReducible = true;
    // int divisor=2;
    // while (isReducible) {
    //     while (num % divisor == 0 and den % divisor == 0) {
    //         num = num / divisor;
    //         den = den / divisor;
    //     }
    //     divisor++;
    //     if (divisor > num or divisor > den) isReducible = false;
    // }
}
