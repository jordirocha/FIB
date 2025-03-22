#include <iostream>
using namespace std;
bool es_poderos(int n)
{
    bool isPowerful = true;
    for (int i = 2; n > 1 and isPowerful; ++i)
    {
        int d = 0;
        while (n % i == 0)
        {
            d++;
            n = n / i;
        }
        if (d != 0 and d < 2) { isPowerful = false; }
    }
    return isPowerful;
}

int main()
{
    int a;
    while (cin >> a)
    {
        cout << 1;
        for (int i = 2; i <= a; i++)
            if (es_poderos(i)) cout << ',' << i;
        cout << endl;
    }
}
