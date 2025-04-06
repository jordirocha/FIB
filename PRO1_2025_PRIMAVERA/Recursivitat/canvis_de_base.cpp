#include <iostream>
using namespace std;

char format(int a)
{
    if (a == 10) return 'A';
    if (a == 11) return 'B';
    if (a == 12) return 'C';
    if (a == 13) return 'D';
    if (a == 14) return 'E';
    if (a == 15) return 'F';

    return a + '0';
}

void toBase(int n, int b)
{
    if (n > 0)
    {
        toBase(n / b, b);
        if (b == 16)
            cout << format(n % b);
        else
            cout << n % b;
    }
}

int main()
{
    int a;
    while (cin >> a)
    {
        if (a == 0)
            cout << "0 = 0, 0, 0" << endl;
        else
        {
            cout << a << " = ";
            toBase(a, 4);
            // cout << ", ";
            // toBase(a, 4);
            // cout << ", ";
            // toBase(a, 16);
            cout << endl;
        }
    }
}
