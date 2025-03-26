#include <iostream>
using namespace std;
int compara(int d1, int m1, int a1, int d2, int m2, int a2)
{
    if (a1 > a2) return 1;
    if (a1 < a2) return -1;
    if (m1 > m2) return 1;
    if (m1 < m2) return -1;
    if (d1 > d2) return 1;
    if (d1 < d2) return -1;
    return 0;
}

int main()
{
    int d1, m1, a1, d2, m2, a2;
    char d = '/';
    while (cin >> d1 >> d >> m1 >> d >> a1 and cin >> d2 >> d >> m2 >> d >> a2)
    {
        int r = compara(d1, m1, a1, d2, m2, a2);
        if (r == 0)  cout << "iguals" << endl;
        else if (r == 1)  cout << "posterior" << endl;
        else  cout << "anterior" << endl;
    }
}
