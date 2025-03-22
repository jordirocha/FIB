//
// Created by jordy on 22/03/2025.
//
#include <cmath>
#include <iostream>
using namespace std;
double distancia(double x1, double y1, double x2, double y2)
{
    double x = x1 - x2;
    double y = y1 - y2;
    return sqrt(x * x + y * y);
}

int main()
{
    string city;
    while (cin >> city)
    {
        double ix, iy, cx2, cy2;
        double d    = .0;
        bool travel = true;
        cin >> ix >> iy;
        double cx1 = ix, cy1 = iy;
        while (travel and cin >> cx2 >> cy2)
        {
            if (cx2 == ix and cy2 == iy) travel = false;
            d += distancia(cx1, cy1, cx2, cy2);
            cx1 = cx2;
            cy1 = cy2;
        }
        cout.setf(ios::fixed);
        cout.precision(4);
        cout << "Trajecte " << city << ": " << d << endl;
    }
}
