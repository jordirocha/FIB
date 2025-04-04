#include <iostream>
using namespace std;

bool es_de_hamming(int x)
{
    int d    = 2;
    bool ham = true;
    while (ham and d * d <= x)
    {
        if (x % d == 0)
        {
            if (d == 2 or d == 3 or d == 5)
                while (x % d == 0) { x /= d; }
            else { ham = false; }
        }
        d++;
    }
    if (ham and x > 1) { ham = (x == 2 or x == 3 or x == 5); }
    return ham;
}

int main()
{
    int a;
    while (cin >> a)
    {
        int i = 1, num = 2;
        if (a != 0) { cout << 1; }
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
