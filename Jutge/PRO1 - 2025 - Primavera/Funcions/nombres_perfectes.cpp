#include <iostream>
using namespace std;

bool es_perfecte(int x) {
    int sum;

    if (x >= 2) {
        int divisor = 2;
        sum = 1;
        while (divisor < x and divisor * divisor < x) {
            if (x % divisor == 0) sum += divisor + (x / divisor);
            divisor++;
        }
    } else {
        sum = -1;
    }

    return sum == x;
}

int main() {
    int x;
    while (cin >> x)
        cout << (es_perfecte(x) ? "true" : "false") << endl;

    return 0;
}