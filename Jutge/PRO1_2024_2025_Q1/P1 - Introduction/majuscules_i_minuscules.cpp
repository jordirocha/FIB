#include <iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;
    if (ch >= 'A' and ch <= 'Z') {
        int diff = ch - 'A';
        cout << char('a' + diff) << endl;
    } else {
        int diff = ch - 'a';
        cout << char('A' + diff) << endl;
    }
}
