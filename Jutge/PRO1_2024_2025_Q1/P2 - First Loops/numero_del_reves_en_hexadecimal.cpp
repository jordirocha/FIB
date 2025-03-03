#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a == 0)
    {
        cout << 0;
    }

    while (a > 0)
    {
        int resto = a % 16;
        if (resto <= 9)
        {
            cout << resto;
        }
        else
        {
            if (resto == 10)
            {
                cout << 'A';
            }
            else if (resto == 11)
            {
                cout << 'B';
            }
            else if (resto == 12)
            {
                cout << 'C';
            }
            else if (resto == 13)
            {
                cout << 'D';
            }
            else if (resto == 14)
            {
                cout << 'E';
            }
            else if (resto == 15)
            {
                cout << 'F';
            }
        }

        a /= 16;
    }

    cout << endl;
}