 #include <iostream>
 #include <cmath>
 using namespace std;

int main()
{
    int a, b;
    int maxSenar = 0;
    int maxParell = 0;
    int currentSenar = 1, currentParell = 1;
    bool parA = false;
    // bool parB = false;
    // bool isImpar = false;
    cin >> a;
    parA = (a % 2 == 0);
    while (cin >> b)
    {
        bool parB = b % 2 == 0;
        // cout << a << " comparo con " << b << endl;
        if (parB)
        {
            if (parA)
            {
                // cout << "como el anterio es par, incrementamos" << endl;
                currentParell++;
                // cout << "contador pares" << currentParell << endl;
            }
            else
            {
                if (currentSenar > maxSenar)
                {
                    maxSenar = currentSenar;
                }

                currentSenar = 1;
                currentParell = 1;
            }
        }
        else
        {
            // cout << "el siguiente es impar" << endl;
            if (not parA)
            {
                // cout << "como el anterio es impar, incrementamos" << endl;
                currentSenar++;
                // cout << "contador impares" << currentSenar << endl;
            }
            else
            {
                // cout << a << " " << b << endl;
                // cout << "como a es par entonces reiniciamos contador pares" << endl;

                if (currentParell > maxParell)
                {
                    maxParell = currentParell;
                }
                currentParell = 1;
                currentSenar = 1;
            }
        }
        a = b;
        parA = parB;
    }

    if (currentSenar > 1 and currentSenar > maxSenar)
    {
        maxSenar = currentSenar;
    }

    if (currentParell > 1 and currentParell > maxParell)
    {
        maxParell = currentParell;
    }

    cout << "PARELL: " << maxParell << endl;
    cout << "SENAR: " << maxSenar << endl;
}
