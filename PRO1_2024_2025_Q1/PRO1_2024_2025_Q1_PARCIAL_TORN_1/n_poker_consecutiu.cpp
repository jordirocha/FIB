#include <iostream>
using namespace std;
//
// int main()
// {
//   int n, matches = 1;
//   char c1, c2;
//   cin >> n;
//   cin >> c1;
//   bool read = (n != 1);
//   while(read and cin >> c2)
//     {
//       if(c1 == c2)
//         matches++;
//       else
//         matches = 1;
//       read = matches != n;
//       c1 = c2;
//     }
//   if(read)
//     cout << "No hi ha " << n << "-Poker" << endl;
//   else
//     cout << n << "-Poker de " << c1 << "!" << endl;
// }

int main()
{
    int a, b;
    int maxSenar     = 0;
    int maxParell    = 0;
    int currentSenar = 1, currentParell = 1;
    bool parA = false;
    cin >> a;
    parA = (a % 2 == 0);
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
    if (not parA)
    {
        if (currentSenar > maxSenar) { maxSenar = currentSenar; }
    }
    else
    {
        if (currentParell > maxParell) { maxParell = currentParell; }
    }

    cout << "PARELL: " << maxParell << endl;
    cout << "SENAR: " << maxSenar << endl;
}