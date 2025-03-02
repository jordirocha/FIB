
#include <cmath>
#include <iostream>
#include <math.h>

using namespace std;

void factorizar(int n, int &f, int &q)
{
    // int f = -1, q = 1000;
    q = -1;
    int d = 2;
    int currentFactor = 0;
    bool firstFactor = false;
    int counter = 0;
    while (n != 1)
    {
        bool isFactor = false;
        if (n % d == 0)
        {
            // cout << "factor: " << d << endl;
            currentFactor = d;
            isFactor = true;
            // firstFactor = true;
            counter++;
            n /= d;
        }
        else
        {
            // cout << "no factor: " << d << endl;
            // if (counter > 0)
            // {
            //     // cout << currentFactor << " " << counter << endl;
            //     cout << counter << endl;
            // }
            ++d;
        }

        // if (currentFactor != d)
        // {
        // cout << currentFactor;
        // cout << "diferente a " << d << endl;
        if (counter > 0)
        {
            if (not firstFactor)
            {
                f = currentFactor;
                q = counter;
                firstFactor = true;
            }

            // cout << "entro aqui porque el factor " << currentFactor << endl;
            // cout << "esta elevad a  " << counter << endl;
            // cout << "y el siguiente factor es  " << d << endl;
            // if (currentFactor > f and counter > q)
            if (currentFactor <= f)
            {
                f = currentFactor;
                q += counter;

                cout << f << " " << q << endl;
            }
            counter = 0;
        }

        // }
        // else
        // {
        // cout << currentFactor;
        // cout << "igual a " << d << endl;
        // }
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        int f = -1, q = 1000;
        factorizar(n, f, q);
        // factor(n, f, q);
        cout << f << ' ' << q << endl;
    }
    return 0;
}
