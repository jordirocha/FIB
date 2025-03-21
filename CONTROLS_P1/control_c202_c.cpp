#include <iostream>
using namespace std;
int main()
{
    int n, a = 0, b = 0, c = 0;
    char maxCh = 'a';
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        if (ch == 'a')
            a++;
        else if (ch == 'b')
            b++;
        else
            c++;
    }
    int max = a;
    if (b > max)
    {
        maxCh = 'b';
        max   = b;
    }
    else if (c > max)
    {
        maxCh = 'c';
        max   = c;
    }

    cout << "majoria de " << maxCh << endl << max << " repeticio(ns)" << endl;
}
