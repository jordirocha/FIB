#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

using namespace std;

void operations(double x)
{
    cout << sin(x) << " ";
    cout << cos(x) << endl;
}

int main()
{
    cout.setf(ios::fixed);
    cout.precision(6);

    double x;
    while (cin >> x)
    {
        operations(x * (M_PI / 180));
    }
}