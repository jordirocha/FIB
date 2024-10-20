#include <iostream>

using namespace std;

int main()
{
    int a;

    cin >> a;
    for (int i = 2; i <= 16; i++)
    {
        int digits = 0;
        int decimal = a;
        while (decimal > 0)
        {
            decimal /= i;
            digits++;
        }
        cout << "Base " << i << ": " << digits << " cifras." << endl;
    }
}