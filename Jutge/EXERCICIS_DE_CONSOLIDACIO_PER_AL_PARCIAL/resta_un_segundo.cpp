//
// Created by jordi on 06/11/24.
//
#include <iostream>

using namespace std;

int main() {
    int h, m, s;

    cin >> h >> m >> s;

    if (h == 0 and m == 0 and s == 0) {
        h = 23;
        m = s = 59;
    } else if (m == 0 and s == 0) {
        h = h - 1;
        m = s = 59;
    } else if (s == 0) {
        m = m - 1;
        s = 59;
    } else {
        s = s - 1;
    }

    if (h < 10) cout << "0" << h << ":";
    else cout << h << ":";
    if (m < 10) cout << "0" << m << ":";
    else cout << m << ":";
    if (s < 10) cout << "0" << s << ":";
    else cout << s << endl;
}
