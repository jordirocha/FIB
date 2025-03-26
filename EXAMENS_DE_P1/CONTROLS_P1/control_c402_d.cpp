#include <iostream>
using namespace std;

string gira(string s) {
    string temp;
    for (int i = s.length() - 1; i >= 0; i--) temp += s[i];
    return temp;
}

int main() {
    string s1, s2;
    while (cin >> s1 >> s2) {
        if (s1 == s2 or gira(s1) == s2) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
