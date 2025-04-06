#include <iostream>
using namespace std;

int main()
{
    int x, y, currentPend = 0, count = 2, currentPos = 2;
    // ascendentes
    int posAscending = 0, pendienteAscending = 0, longAscending = 0;
    // descendentes
    int posDescending = 0, pendienteDescending = 0, longDescending = 0;
    cin >> x >> y;
    currentPend = y - x;
    x           = y;

    while (cin >> y)
    {
        currentPos++;
        // cout << "numeros a comparar: " << x << " " << y << endl;
        int diff = y - x;
        if (diff != 0)
        {
            if (diff == currentPend)
            {
                cout << x << " " << y << " <- misma pendiente " << endl;
                count++;
                currentPend = diff;
            }
            else
            {
                // cout << "total de numeros con misma pendiente: " << count
                //      << endl;

                if (count >= 3)
                {
                    cout << "entro a qui por que hay otra secuencia distint"
                         << x << " " << y << " <- distinta pendiente " << endl;

                    if (currentPend > 0)
                    {
                        if (count > longAscending)
                        {
                            posAscending       = currentPos - count;
                            pendienteAscending = currentPend;
                            longAscending      = count;
                            // cout << "/ " << posAscending << ':'
                            //      << pendienteAscending << ':' <<
                            //      longAscending
                            //      << endl;
                        }
                    }
                    else if (currentPend < 0)
                    {
                        if (count > longDescending)
                        {
                            posDescending       = currentPos - count;
                            pendienteDescending = currentPend;
                            longDescending      = count;
                            cout << "\\ " << posDescending << ':'
                                 << pendienteDescending << ':' << longDescending
                                 << endl;
                        }
                    }
                    // cout << "pendientes anterior: " << currentPend << endl;
                    // cout << "pendiente nueva: " << diff << endl;
                }

                count       = 2;
                currentPend = diff;
            }
        }
        x = y;
    }
    currentPos++;
    cout << "ultina posicion " << currentPos << endl;

    if (count >= 3)
    {
        // cout << "falta comprobar para la salida, porque hay un tobogan de "
        //      << count << endl;
        if (currentPend > 0)
        {
            if (count > longAscending)
            {
                posAscending       = currentPos - count;
                pendienteAscending = currentPend;
                longAscending      = count;
                // cout << "/ " << posAscending << ':' << pendienteAscending <<
                // ':'
                //      << longAscending << endl;
            }
        }
        else if (currentPend < 0)
        {
            if (count > longDescending)
            {
                posDescending       = currentPos - count;
                pendienteDescending = currentPend;
                longDescending      = count;
                // cout << "\\ " << posDescending << ':'
                //      << pendienteDescending << ':' << longDescending
                //      << endl;
            }
        }
    }

    if (longAscending != 0)
        cout << "/ " << posAscending << ':' << pendienteAscending << ':'
             << longAscending << endl;
    if (longDescending != 0)
        cout << "\\ " << posDescending << ':' << pendienteDescending << ':'
             << longDescending << endl;
}