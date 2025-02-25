
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        int cifras = 0;
        while (b > 0)
        {
            cifras++;
            b /= a;
        }
        cout << cifras << endl;
    }
}
