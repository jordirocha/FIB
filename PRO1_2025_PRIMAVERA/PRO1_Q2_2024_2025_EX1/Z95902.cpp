#include <iostream>
using namespace std;

int main()
{
    char ch;
    int potencia = 0, sum = 0;
    while (cin >> ch)
    {
        if (ch == '*')
        {
            cout << (char)sum << endl;
            potencia = 0;
            sum      = 0;
        }
        else
        {
            if (ch == '1')
            {
                int res = 1;
                for (int i = 0; i < potencia; i++) { res *= 2; }
                sum += res;
            }
            potencia++;
        }
    }
}
