//
// Created by jordi on 27/11/24.
//
#include <iostream>
#include <vector>
using namespace std;

double producte_escalar(const vector<double> &u, const vector<double> &v) {
    double product = .0;
    for (int i = 0; i < u.size(); i++) {
        product += u[i] * v[i];
    }

    return product;
}

int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> u(n);
        vector<double> v(n);
        for (int i = 0; i < n; ++i)
            cin >> u[i];
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        cout << producte_escalar(u, v) << endl;
    }
    return 0;
}
