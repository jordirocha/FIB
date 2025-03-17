#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int h, m, s;
    cin >> h >> m >> s;

    int seconds = h * 3600 + m * 60 + s + 1;
    seconds %= 86400;

    s = seconds % 60;
    m = (seconds / 60) % 60;
    h = seconds / 3600;

    cout << (h / 10) << (h % 10) << ":";
    cout << (m / 10) << (m % 10) << ":";
    cout << (s / 10) << (s % 10) << endl;
}
