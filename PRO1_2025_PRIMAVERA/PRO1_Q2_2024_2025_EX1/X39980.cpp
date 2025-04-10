#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int maxSenar = 0, maxParell = 0;
    int currentSenar = 1, currentParell = 1;
    cin >> a;
    bool parA = (a % 2 == 0);
    while (cin >> b)
    {
        bool parB = b % 2 == 0;
        if (parB)
        {
            if (parA) { currentParell++; }
            else
            {
                if (currentSenar > maxSenar) { maxSenar = currentSenar; }
                currentSenar  = 1;
                currentParell = 1;
            }
        }
        else
        {
            if (not parA) { currentSenar++; }
            else
            {
                if (currentParell > maxParell) { maxParell = currentParell; }
                currentParell = 1;
                currentSenar  = 1;
            }
        }
        a    = b;
        parA = parB;
    }

    if (parA)
    {
        if (currentParell > maxParell) { maxParell = currentParell; }
    }
    else
    {
        if (currentSenar > maxSenar) { maxSenar = currentSenar; }
    }

    cout << "PARELL: " << maxParell << endl;
    cout << "SENAR: " << maxSenar << endl;
}