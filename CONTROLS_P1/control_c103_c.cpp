#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch >= 'a' and ch <= 'z')
        cout << ch << " -> " << ch - 'a' + 1 << endl;
    else if (ch >= 'A' and ch <= 'Z')
        cout << ch << " -> " << ch - 'A' + 1 << endl;
    else
        cout << ch << " -> " << "no es una lletra" << endl;
}
