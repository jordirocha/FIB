#include <iostream>

using namespace std;

int operation() {
    char c;
    cin >> c;

    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    int a = operation();
    int b = operation();

    if (c == '+') {
        return a + b;
    }
    if (c == '-') {
        return a - b;
    }
    if (c == '*') {
        return a * b;
    }
    return 0;
}

int main() {
    cout << operation() << endl;
}
