
#include <iostream>

using namespace std;

void factor(int n, int &f, int &q) {
    int lastDivisor = -1;
    for (int i = 2; n >= i; i++) {
        while (n % i == 0) {
            cout << i << " " << endl;
            n /= i;
        }
    }
}


int main() {
    int n;
    while (cin >> n) {
        int f = -1, q = 1000;
        factor(n, f, q);
        cout << f << ' ' << q << endl;
    }
    return 0;
}