//
//
// Input:
// Output:
//
#include <iostream>

using namespace std;

/**
 * @pre  n >= 0
 * @post retorna cert si n és un número entrepà, fals en cas contrari
 */
bool is_sandwich(int n)
{
    if (n < 100)
        return false;

    int reverse = 0;
    int d = n % 10;
    int e = (n / 10) % 10;
    bool isEquale = true;

    reverse = reverse * 10 + (n % 10); // <= 9
    n = n / 10;

    while (n >= 10 and isEquale and d != e)
    {
        int temp = (n % 10);
        reverse = reverse * 10 + temp;
        if (e != temp)
            isEquale = false;
        n = n / 10;
    }

    if (isEquale and d == n)
        return true;

    return false;
}

bool todosIguales(int n)
{
    if (n < 10)
    {
        return true;
    }

    bool allEqual = true;
    int lastDigit = n % 10;
    n = n / 10;

    while (n > 0 and allEqual)
    {
        int temp = n % 10;
        if (temp != lastDigit)
            allEqual = false;
        n = n / 10;
    }

    return allEqual;
}

bool es_capicua(int n)
{
    if (n < 10)
        return true;

    int x = n;
    int numeroInvertido = 0;

    while (x > 0)
    {
        numeroInvertido = numeroInvertido * 10 + (x % 10);
        x /= 10;
    }

    return n == numeroInvertido;
}

int main()
{
    int x;
    cin >> x;
    int i = 1;
    x = x - 2;
    while (x > 0)
    {
        i = i * 10;
        x--;
    }
    int start = (i - 1);
    cout << start << endl;

    for (int j = 1; j <= 9; j++)
    {
        for (int k = 0; k < start; k++)
        {
            if (todosIguales(k))
            {
                cout << j << "-" << k << "-" << j << endl;
            }

            // if (todosIguales(k))
            // {
            //     cout << j << k << j << endl;
            // }
            // if (es_capicua(k))
            // {
            //     if (k % 10 != j)
            //     {
            //         cout << j << k << j << endl;
            //     }
            // }
        }
    }

    // int final = (i * 10) - 1;
    // cout << final << endl;
    // for (int j = start; j < final; j++)
    // {
    //     if (is_sandwich(j))
    //     {
    //         cout << j << endl;
    //     }
    // }
}
