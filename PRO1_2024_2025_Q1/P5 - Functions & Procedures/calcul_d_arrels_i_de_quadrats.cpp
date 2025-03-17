#include <iostream>
#include <cmath>

using namespace std;

void operations(int x)
{
    cout << (x * x) << " " << sqrt(x)<<endl;
}

int main()
{
    cout.setf(ios::fixed);
    cout.precision(6);

    int x;

    while (cin >> x) operations(x);
}