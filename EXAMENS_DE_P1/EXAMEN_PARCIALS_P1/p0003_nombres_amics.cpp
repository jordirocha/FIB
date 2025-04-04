//
// Programa que escriba en orden todos los divisores de un número dado
// Input: un natural entre 1 y 10^9
// Output: escriba los divisores de n de pequeño a mayor
//
#include <iostream>
using namespace std;
int suma_divisors(int a)
{
    int s = 1;
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0) s += i + (a / i);
    return s;
}
bool son_amics(int a, int b)
{
    return a != b ? suma_divisors(a) == b and suma_divisors(b) == a : false;
}
int main()
{
    int a, b;
    bool first = true;
    while (cin >> a >> b)
    {
        if (son_amics(a, b))
        {
            if (first) { first = false; }
            else { cout << ','; }
            cout << '(' << a << ' ' << b << ')';
        }
    }
    cout << endl;
}
