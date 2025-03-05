
#include <iostream>

using namespace std;

int toBinary(int x)
{
    if (x == 1)
    {
        return 1;
    }

    cout << x % 2 << endl;
    int cociente = toBinary(x / 2);

    // cout << cociente << endl;
    return cociente;
}

int main()
{
    int a;
    while (cin >> a)
    {
        cout << toBinary(a) << endl;
    }
}
