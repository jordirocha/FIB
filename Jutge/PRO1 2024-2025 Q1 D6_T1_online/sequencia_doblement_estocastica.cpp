//
// Created by jordi on 27/11/24.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef vector<int> Counters;

int main() {
    int r;



    while (cin >> r) {
        bool is_stochastic_h = true, is_stochastic_v = true;
        Counters c(r);
        Counters c_v(r);

        for (int i = 0; i < r; i++) {
            int suma = 0;
            for (int j = 0; j < r; j++) {
                int x;
                cin >> x;
                suma += x;
                c[j] += x;
            }
            c_v[i] = suma;
        }

        for (int i = 0; i < r and is_stochastic_h; i++) {
            if (c_v[i] != 10) {
                is_stochastic_h = false;
            }
        }

        for (int i = 0; i < r and is_stochastic_v; i++) {
            if (c[i] != 10) {
                is_stochastic_v = false;
            }
        }

        if (is_stochastic_h and is_stochastic_v) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }


    return 0;
}
