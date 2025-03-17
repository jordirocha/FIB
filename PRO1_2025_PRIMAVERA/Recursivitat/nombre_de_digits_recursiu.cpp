#include <iostream>
using namespace std;

int nombre_digits(int n)
{
    if (n < 10)
        return 1;
    return 1 + nombre_digits(n / 10);
}

int main()
{
    int a;
    while (cin >> a)
    {
        cout << nombre_digits(a) << endl;
    }
}
