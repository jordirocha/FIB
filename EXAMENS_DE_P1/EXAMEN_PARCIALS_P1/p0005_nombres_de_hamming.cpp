#include <iostream>
using namespace std;

bool es_de_hamming(int x)
{
    // int d    = 2;
    bool ham = true;
    while (x % 2 == 0)
    {
        // cout << 2 << endl;
        x /= 2;
    }
    for (int i = 3; i * i <= x and ham; i += 2)
    {
        bool isValid = true;
        // if (x % i == 0)
        // {
        //     if (i == 3 or i == 5)
        //     {
        while (isValid and x % i == 0)
        {
            // cout << i << endl;
            if (i == 3 or i == 5) { x /= i; }
            else
            {
                ham     = false;
                isValid = false;
            }
        }
        //     }
        //     else { ham = false; }
        // }
    }
    // if (x > 1) cout << x << endl;
    if (ham and x > 1) { ham = (x == 3 or x == 5); }
    // while (ham and d * d <= x)
    // {
    //     if (x % d == 0)
    //     {
    //         if (d == 2 or d == 3 or d == 5)
    //             while (x % d == 0) { x /= d; }
    //         else { ham = false; }
    //     }
    //     d++;
    // }
    // if (ham and x > 1) { ham = (x == 2 or x == 3 or x == 5); }
    return ham;
}

int main()
{
    int a;
    // cout << es_de_hamming(120) << endl;
    while (cin >> a)
    {
        int i = 1, num = 2;
        if (a != 0) cout << 1;
        while (i < a)
        {
            if (es_de_hamming(num))
            {
                cout << ',' << num;
                i++;
            }
            num++;
        }
        cout << endl;
    }
}
