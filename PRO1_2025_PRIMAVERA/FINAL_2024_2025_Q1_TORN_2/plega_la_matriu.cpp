
#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int> > Matriu;

/*
 * PRE: m una matriu 2N x 2N.
 * POST:r és una matriu N x N en què en cada posició
 * té la suma dels elements d'm superposats pel plegat d'm.
 */

void plegaMatriu(const Matriu &m, Matriu &r) {
}

void llegeixMatriu(Matriu &m, int n) {
    /* m matriu quadrada */

    m = Matriu(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m[i][j];
}

void escriuMatriu(const Matriu &m) {
    int n = m.size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
    cout << "--------------------------" << endl;
}

int main() {
    int n = 0;

    while (cin >> n) {
        Matriu m;
        llegeixMatriu(m, n);

        Matriu r;
        plegaMatriu(m, r);
        escriuMatriu(r);
    }
}


