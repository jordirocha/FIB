#include <iostream>

using namespace std;

int main()
{
    char a, b;
    int pos;

    cin >> a;

    if (a >= 97 && a <= 122)
    {
        pos = a - 97;
        cout << (char)(65 + pos) << endl;
    }
    else
    {
        pos = a - 65;
        cout << (char)(97 + pos) << endl;
    }
}