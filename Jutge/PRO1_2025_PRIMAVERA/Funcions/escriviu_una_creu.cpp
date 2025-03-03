#include <iostream>

using namespace std;

void cross(int n, char c) {
    int middle = n / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == middle) cout << c;
            else if (i == middle) cout << c;
            else if (j < middle) cout << ' ';
        }
        cout << endl;
    }
}


int main() {
    int n;
    char c;
    while (cin >> n >> c) cross(n, c);
    return 0;
}

