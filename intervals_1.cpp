#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x, y, z, t;
    cin >> x >> y >> z >> t;

    int Mx, My, Lz, Lt;

    if (y - x > t - z)
    {
        Mx = x;
        My = y;
        Lz = z;
        Lt = t;
    }
    else
    {
        Mx = z;
        My = t;
        Lz = x;
        Lt = y;
    }

    if (Lz >= Mx && Lz <= My)
    {
        if (Lt >= Mx && Lt <= My)
        {
            cout << "[" << Lz << "," << Lt << "]" << endl;
        }
        else if (Lt >= My)
        {
            cout << "[" << Lz << "," << My << "]" << endl;
        }
    }
    else
    {
        if (Lt >= Mx && Lt <= My)
        {
            cout << "[" << Mx << "," << Lt << "]" << endl;
        }
        else if (Lt >= My)
        {
            cout << "[" << Mx << "," << My << "]" << endl;
        }
        else
        {
            cout << "[]" << endl;
        }
    }

    // if (x >= z && x <= t)
    // {
    //     if (y >= z && y <= t)
    //     {
    //         cout << "[" << x << "," << y << "]" << endl;
    //     }
    //     else
    //     {
    //         cout << "[" << x << "," << t << "]" << endl;
    //     }
    // }
    // else
    // {
    //     if (y >= z && y <= t)
    //     {
    //         cout << "[" << z << "," << t << "]" << endl;
    //     }
    //     else
    //     {
    //         cout << "[]" << endl;
    //     }
    // }
}