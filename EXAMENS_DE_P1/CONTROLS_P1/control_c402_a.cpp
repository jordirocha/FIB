#include <iostream>
using namespace std;

int posicions_iguals(string s1, string s2) {
    int i = 0, c = 0;
    while (i < s1.size() and i < s2.size()) {
        if (s1[i] == s2[i]) c++;
        i++;
    }
    return c;
}

int main() {
    string s1, s2;
    while (cin >> s1 >> s2)
        cout << posicions_iguals(s1, s2) << endl;
}
