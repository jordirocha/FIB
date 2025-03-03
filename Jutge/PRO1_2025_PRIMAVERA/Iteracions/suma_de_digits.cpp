
#include <iostream>

using namespace std;

int main()
{
    int x, y;

    while (cin >> x)
    {
        int suma = 0;
        if (x / 10 == 0)
            suma = x;
        else
        {
            y = x;
            while (y > 0)
            {
                suma += y % 10;
                y /= 10;
            }
        }
        cout << "La suma dels digits de " << x << " es " << suma << "." << endl;
    }
}
