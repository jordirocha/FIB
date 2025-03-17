#include <iostream>
using namespace std;

bool es_capicua(int n) {
    int temp = n;
    int reversedNumber = 0;

    while (temp > 0) {
        reversedNumber = reversedNumber * 10 + (temp % 10);
        temp /= 10;
    }

    return reversedNumber == n;
}

int main() {
    int n;
    while (cin >> n) cout << (es_capicua(n) ? "true" : "false") << endl;
    return 0;
}