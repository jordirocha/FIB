#include <iostream>
using namespace std;
void convergeix(int n, int &k, int &lluny)
{
    while (n != 1)
    {
        if (n % 2 == 0) { n /= 2; }
        else { n = n * 3 + 1; }
        k++;
        if (n > lluny) lluny = n;
    }
}
int main()
{
    int m, p, max = 0, i = 1;
    cin >> m >> p;
    while (i <= m)
    {
        int k = 0, lluny = i;
        convergeix(i, k, lluny);
        if (lluny > max) max = lluny;
        if (k >= p) cout << i << endl;
        i++;
    }
    cout << "S'arriba a " << max << "." << endl;
}
