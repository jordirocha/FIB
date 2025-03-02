//
//
// Input:
// Output:
//
#include <iostream>

using namespace std;

int main()
{

    char parentesis;
    int abierto = 0, cerrado = 0;

    while (cin >> parentesis)
    {
        if (parentesis == '(')
            abierto++;
        else
            cerrado++;
    }
    if (abierto == cerrado)
        cout << "si" << endl;
    else
        cout << "no" << endl;
}
