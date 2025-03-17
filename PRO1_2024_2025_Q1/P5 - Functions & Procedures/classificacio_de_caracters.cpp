//
// Created by jordi on 13/11/24.
//
#include <iostream>
#include <cmath>

using namespace std;

void escriu_linia(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "cert" << endl;
    else cout << "fals" << endl;
}

int main() {
    bool is_letter = false, is_vocal = false, is_consonant = false, is_majus = false, is_minus = false, is_digit =
            false;
    char ch;
    cin >> ch;

    is_letter = (ch >= 'A' and ch <= 'Z') || (ch >= 'a' and ch <= 'z');
    escriu_linia(ch, "lletra", is_letter);

    if (is_letter) {
        is_vocal = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
        is_consonant = !is_vocal;
    }

    if (ch >= 'A' and ch <= 'Z') is_majus = true;
    if (ch >= 97 and ch <= 122) is_minus = true;

    is_digit = ((ch - '0') >= 0 && (ch - '0') < 10);

    escriu_linia(ch, "vocal", is_vocal);
    escriu_linia(ch, "consonant", is_consonant);
    escriu_linia(ch, "majuscula", is_majus);
    escriu_linia(ch, "minuscula", is_minus);
    escriu_linia(ch, "digit", is_digit);

}
