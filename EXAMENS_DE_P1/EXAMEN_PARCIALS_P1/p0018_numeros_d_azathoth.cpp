#include <iostream>
using namespace std;

void binary(int n)
{
    if (n > 0)
    {
        int digit = n % 2;
        binary(n / 2);
        cout << digit;
    }
}

void escriu_binari(int n)
{
    if (n > 0)
    {
        int digit = (n % 50);
        escriu_binari(n / 50);
        if (n % 50 == 0) { cout << 0; }
        else { binary(digit); }
    }
    cout << ".";
}

int main()
{
    int n;
    while (cin >> n)
    {
        cout << n << " = ";
        if (n != 0) { escriu_binari(n); }
        else { cout << ".0."; }
        cout << endl;
    }
}
