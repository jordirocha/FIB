#include <iostream>
using namespace std;

int main()
{
    int x, y, z = 0;
    bool asc = true, conv = true, f = true;
    cin >> x;
    while ((asc or conv) and cin >> y)
    {
        int t = y - x;
        if (t <= 0) asc = false;
        if (f) { f = false; }
        else if (t - z <= 0) { conv = false; }
        z = t;
        x = y;
    }
    if (conv or asc) { cout << "economia solvent" << endl; }
    else { cout << "economia no solvent" << endl; }
}
