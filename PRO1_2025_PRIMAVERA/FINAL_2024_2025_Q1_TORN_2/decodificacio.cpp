#include <iostream>
using namespace std;

void decodificacio(int a) {
    if (a > 0) {
        char c = char(a % 100);
        decodificacio(a / 100);
        cout << c << endl;
    }
}

int main() {
    int n;
    cin >> n;
    decodificacio(n);
}
