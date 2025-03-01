//
// Programa que lea un natural n y escriba figuras n×n
// Input: un natural n ≥ 1
// Output: la figura correspondiente
//
#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int separator = ((a - 1) - i);
        for (int j = 0; j < a; j++)
        {
            if (j == separator)
                cout << '/';
            else if (j < separator)
                cout << '+';
            else
                cout << '*';
        }
        cout << endl;
    }
}
