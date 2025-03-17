#include <iostream>

using namespace std;

int main()
{
    double real, decimal;
    int rounded, integer;

    cin >> real;

    decimal = real - (int)real;

    integer = real;
    rounded = real;

    if (decimal)
    {
        if (decimal >= 0.5)
            rounded = real + 1;
    }

    if (decimal)
        integer = real + 1;

    cout << (int)real << " " << integer << " " << rounded << endl;
}