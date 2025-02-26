//
// El programa obtiene el numero harmonico de un numero natural
// Input: un numero natural
// Output: su numero harmonico
//
#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(4);

    int a;
    double harmonic = 0.0;

    cin >> a;

    for (int i = 1; i <= a; i++)
        harmonic += 1.0 / i;

    cout << harmonic << endl;
}