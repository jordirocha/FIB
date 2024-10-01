#include <iostream>

using namespace std;

int main()
{
    char c;
    cin >> c;

    if (c >= 97 && c <= 122)
        cout << "minuscula" << endl;
    else
        cout << "majuscula" << endl;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        cout << "vocal" << endl;
    else
        cout << "consonant" << endl;
}