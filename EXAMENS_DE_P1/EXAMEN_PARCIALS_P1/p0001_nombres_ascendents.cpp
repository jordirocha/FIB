#include <iostream>
using namespace std;

bool es_ascendent(int n)
{
    int d1   = n % 10;
    n        = n / 10;
    bool asc = true;
    while (asc and n > 0)
    {
        int d2   = n % 10;
        n        = n / 10;
        int diff = d1 - d2;
        if (diff != 1 and diff != -9) asc = false;
        d1 = d2;
    }
    return asc;
}

int main()
{
    int x, counter = 0;
    while (counter < 2 and cin >> x)
    {
        if (es_ascendent(x)) { counter++; }
        else { counter = 0; }
    }
    if (counter == 2) { cout << "SI" << endl; }
    else { cout << "NO" << endl; }
}
