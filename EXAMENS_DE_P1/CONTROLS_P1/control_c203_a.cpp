#include <iostream>

using namespace std;

bool es_primer(int n)
{
    if (n < 2) return false;
    for (int d = 2; d * d <= n; ++d)
        if (n % d == 0) return false;
    return true;
}

int main()
{
    int a, b;
    int max = 0;
    cin >> a;
    while (cin >> b)
    {
        if (es_primer(a) and es_primer(b)) { max++; }
        a = b;
    }
    cout << "parells de nombres primers consecutius: " << max << endl;
}
