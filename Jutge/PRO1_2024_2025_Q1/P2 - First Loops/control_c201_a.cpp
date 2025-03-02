#include <iostream>

using namespace std;

int main()
{
    int n, m, i = 1, suma = 0;

    cin >> n;
    m = n;

    while (n > 0)
    {
        if (i % 2 != 0)
            suma += (n % 10);
        n = n / 10;
        i++;
    }

    cout << m;

    if (suma % 2 == 0)
        cout << " ES TXATXI" << endl;
    else
        cout << " NO ES TXATXI" << endl;
}
