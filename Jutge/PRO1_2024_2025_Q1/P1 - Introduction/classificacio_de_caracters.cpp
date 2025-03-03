#include <iostream>

using namespace std;

int main() {
    char c;
    cin >> c;

    if (c >= 'A' and c <= 'Z') {
        cout << "majuscula" << endl;
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            cout << "vocal" << endl;
        else
            cout << "consonant" << endl;
    } else {
        cout << "minuscula" << endl;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            cout << "vocal" << endl;
        else
            cout << "consonant" << endl;
    }
}
