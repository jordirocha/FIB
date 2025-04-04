#include <iostream>
using namespace std;

bool es_estrobogramatic(int n)
{
    bool cumple;
    int num = 0, m = n;
    bool abort = false;
    while (not abort and n > 0)
    {
        int d = n % 10;
        if (n == 2 or n == 3 or n == 4 or n == 5 or n == 7) { abort = true; }
        else
        {
            if (d == 6) { d = 9; }
            else if (d == 9) { d = 6; }
            num = num * 10 + d;
            n /= 10;
        }
    }
    if (abort) { cumple = false; }
    else { cumple = (num == m); }
    return cumple;
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
