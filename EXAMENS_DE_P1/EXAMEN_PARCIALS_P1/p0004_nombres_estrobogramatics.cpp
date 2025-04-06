#include <iostream>
using namespace std;
bool es_estrobogramatic(int n)
{
    int num = 0, m = n;
    bool end = false;
    while (not end and n > 0)
    {
        int d = n % 10;
        if (d == 2 or d == 3 or d == 4 or d == 5 or d == 7) { end = true; }
        else
        {
            d   = d == 6 ? 9 : d == 9 ? 6 : d;
            num = num * 10 + d;
            n /= 10;
        }
    }
    return (end ? false : num == m);
}
int main()
{
    int a, odds = 0;
    while (cin >> a)
    {
        cout << a;
        if (es_estrobogramatic(a))
        {
            if (a % 2 != 0) odds++;
            cout << " si es estrobogramatic" << endl;
        }
        else { cout << " no es estrobogramatic" << endl; }
    }
    cout << endl << "estrobogramatics senars: " << odds << endl;
}
