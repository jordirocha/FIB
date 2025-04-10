#include <iostream>
using namespace std;
bool es_de_hamming(int x)
{
    while (x % 2 == 0) x /= 2;
    while (x % 3 == 0) x /= 3;
    while (x % 5 == 0) x /= 5;
    return x == 1;
}
int main()
{
    int n;
    while (cin >> n)
    {
        int i = 1, num = 2;
        if (n != 0) cout << 1;
        while (i < n)
        {
            if (es_de_hamming(num))
            {
                cout << ',' << num;
                i++;
            }
            num++;
        }
        cout << endl;
    }
}