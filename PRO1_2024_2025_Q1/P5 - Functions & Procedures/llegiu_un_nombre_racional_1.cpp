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

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r; // Guarantees b < a (loop termination)
    }
    return a;
}

void read_rational(int &num, int &den) {
    string rational, numerator, denominator;
    cin >> rational;

    int i;
    for (i = 0; i < rational.length() and rational[i] != '/'; i++) numerator += rational[i];
    for (int j = i++; j < rational.length(); j++) denominator += rational[j];

    num = stoi(numerator);
    den = stoi(denominator);

    int divisor = gcd(num, den);

    num /= divisor;
    den /= divisor;
}