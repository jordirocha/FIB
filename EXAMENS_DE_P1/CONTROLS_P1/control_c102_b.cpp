#include <iostream>

using namespace std;

int main()
{
    double dinero;
    string moneda;
    cin >> dinero >> moneda;
    cout.setf(ios::fixed);
    cout.precision(2);
    if (moneda == "euros")
        cout << dinero *  1.254 << " dolars"<< endl;
    else
        cout << dinero /  1.254 << " euros" << endl;
}
