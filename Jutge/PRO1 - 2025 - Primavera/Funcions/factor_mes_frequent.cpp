
#include <cmath>
#include <iostream>
#include <math.h>

using namespace std;

void factorizar(int n, int &f, int &q)
{
    int d = 2;
    int currentFactor = 0;
    int counter = 0;
    while (n != 1)
    {
        if (n % d == 0)
        {
            cout << "factor: " << d << endl;
            currentFactor = d;
            counter++;
            n /= d;
        }
        else
        {
            // if (counter > 0)
            // {
            //     // cout << currentFactor << " " << counter << endl;
            //     cout << counter << endl;
            // }
            ++d;
            counter = 0;
        }

        if (currentFactor == d)
        {
            cout << " puedo seguir diviendo entre: " << currentFactor << " " << counter << endl;
        }

        // if (currentFactor != d)
        // {
        //     cout << currentFactor << " " << counter << endl;
        // }
        // {
        //     counter = 0;
        // }
    }
}

// int d = 2;
// bool firstFactor = false;
// int potencia = 0;
// while (n != 1)
// {
//     // int divisor = i;
//
//     if (n % d == 0)
//     {
//         cout << d << endl;
//         potencia++;
//         n = n / d;
//     }
//     else
//     {
//         ++d;
//     }
//
//     if (not firstFactor)
//     {
//         f = d;
//         q = potencia;
//         firstFactor = true;
//     }
//
//     if (potencia > 0)
//     {
//         cout << "potencias: " << potencia << endl;
//         if (potencia > q)
//
//         {
//             // cout <<  << potencia << endl;
//             f = d;
//             q = potencia;
//         }
//     }
// }
// }

// void factor(int n, int &f, int &q)
// {
//     bool firstFactor = false;
//
//     for (int i = 2; n > 1; i++)
//     {
//         int divisor = i;
//         int potencia = 0;
//         while (n % i == 0)
//         {
//             // cout << i << endl;
//             potencia++;
//             n /= i;
//         }
//
//         if (potencia > 0)
//         {
//             // cout << "resultado: " << divisor << " ^ " << potencia << endl;
//             if (not firstFactor)
//             {
//                 f = divisor;
//                 q = potencia;
//                 firstFactor = true;
//             }
//             if (potencia > q)
//             {
//                 f = divisor;
//                 q = potencia;
//             }
//         }
//     }
// }

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
