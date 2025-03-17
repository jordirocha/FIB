#include <iostream>

using namespace std;

int main() {
    int a, d, h, m, s;
    cin >> a >> d >> h >> m >> s;

    a = a * 365 * 86400;
    d = d * 24 * 3600;
    h = h * 3600;
    m = m * 60;

    int seconds = a + d + h + m + s;
    cout << seconds << endl;
}