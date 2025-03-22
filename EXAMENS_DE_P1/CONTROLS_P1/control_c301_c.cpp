//
// Created by jordy on 22/03/2025.
//
#include <iostream>
using namespace std;

int suma_divisors(int n)
{
    int d = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0) d += i;
    return d;
}

int main()
{
    int n;
    while (cin >> n)
    {
        int m = suma_divisors(n - 2) + suma_divisors(n) + suma_divisors(n + 2);
        cout << n << ": ";
        if (n == m) { cout << "popiropis" << endl; }
        else
        {
            int k = 2;
            while (k * n != m and k * n < m) { k++; }
            if (k * n == m) { cout << k << "-popiropis" << endl; }
            else { cout << "res" << endl; }
        }
    }
}
