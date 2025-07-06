#include <iostream>
using namespace std;

int getBinary()
{
    int dig = 0;
    char ch;
    while (cin >> ch and ch != '|')
    {
        if (ch == '*') { dig = dig * 10 + 1; }
        else { dig = dig * 10; }
    }
    return dig;
}

int decimal(int n)
{
    int dec = 0, c = 0;
    while (n != 0)
    {
        int sum = 1;
        for (int i = 0; i < c; i++) { sum *= 2; }
        dec += (n % 10) * sum;
        c++;
        n /= 10;
    }
    return dec;
}

void llegeix_hora(int &h, int &m, int &s)
{
    char ch;
    cin >> ch;
    h = decimal(getBinary());
    m = decimal(getBinary());
    s = decimal(getBinary());
}
void escriu_hora(int h, int m, int s) { cout << h << ':' << m << ':' << s << endl; }

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int h, m, s;
        llegeix_hora(h, m, s);
        escriu_hora(h, m, s);
    }
}
