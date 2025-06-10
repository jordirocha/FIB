#include <iostream>
using namespace std;

/**
 * @brief Mostra per la sortida els divisors de 'n' a partir de 'd'
 * en amunt, separats per un espai.
 *
 * @pre: d >= 2.
 */
void __descomposicio_factorial(int n, int d) {
    if (d * d <= n) {
        while (n % d == 0) {
            cout << d << " ";
            n /= d;
        }
        __descomposicio_factorial(n, ++d);
    } else if (n > 1) {
        cout << n << " ";
    }
}

/**
 * @brief Mostra per la sortida els divisors de 'n', separats
 * per un espai. No canvieu aquesta funció.
 * @pre: n > 0
 */
void descomposicio_factorial(int n) {
    __descomposicio_factorial(n, 2);
}

int main() {
    int n;
    while (cin >> n) {
        cout << n << ": ";
        descomposicio_factorial(n);
        cout << endl;
    }
}
