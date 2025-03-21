#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout.setf(ios::fixed);
    cout.precision(3);
    if (b == 0)
        cout << "divisio per zero" << endl;
    else
        cout << (a / (double)b) << ' ' << a / b << ' ' << a % b << endl;
}
