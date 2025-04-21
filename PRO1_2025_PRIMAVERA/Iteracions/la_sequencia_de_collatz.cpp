//
// Un programa que dado un natural positivo, si n es par, divídelo por dos. De lo
// contrario, multiplíquelo por 3 y sume
// 1
// Input: consiste en varios naturales n ≥ 1.
// Output: cuántos pasos se tarda en llegar a 1
//
#include <iostream>

using namespace std;

int main()
{
    int a;

    while (cin >> a)
    {
        int steps = 0;
        while (a != 1)
        {
            if (a % 2 == 0) { a /= 2; }
            else { a = a * 3 + 1; }
            steps++;
        }
        cout << steps << endl;
    }
}
