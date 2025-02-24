#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    for (int i = 2; i < 17; i++)
    {
        int num = a;
        int digits = 0;
        while (num > 0)
        {
            num = num / i;
            digits++;
        }
        cout << "Base " << i << ": " << digits << " cifras." << endl;
    }
}