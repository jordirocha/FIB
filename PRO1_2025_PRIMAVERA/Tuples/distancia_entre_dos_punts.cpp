#include <cmath>
#include <iostream>
using namespace std;

struct Punt
{
    double x, y;
};

double distancia(const Punt &a, const Punt &b)
{
    return sqrt(((a.x - b.x) * (a.x - b.x)) + ((a.y - b.y) * (a.y - b.y)));
}

int main()
{
    cout.setf(ios::fixed);
    cout.precision(6);
    double x1, y1, x2, y2;
    while (cin >> x1 >> y1 >> x2 >> y2)
    {
        Punt a, b;
        a.x = x1;
        a.y = y1;
        b.x = x2;
        b.y = y2;
        cout << distancia(a, b) << endl;
    }
    return 0;
}
