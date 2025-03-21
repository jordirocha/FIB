//
// Programa que lee una secuencia de caracteres terminada en punto y que diga si
// tiene alguna 'a' minúscula o no. Input: consiste en una secuencia de
// caracteres terminada en ‘.’. Output: una línea con “si” o “no”
//
#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin >> ch;

    bool flag = false;

    while (ch != '.' and not flag)
    {
        flag = (ch == 'a');
        cin >> ch;
    }

    if (flag)
        cout << "si" << endl;
    else
        cout << "no" << endl;
}
