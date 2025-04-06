#include <iostream>
using namespace std;

void data(int x, int &r, int &s, int &sum)
{
    if (x > 0)
    {
        if (r % 2 == 0) { sum = sum + x; }
        else { sum = sum - x; }
        r = s = 0;
    }
}
int main()
{
    char ch;
    while (cin >> ch)
    {
        int x = 0, sum = 0, s = 0, r = 0;
        while (ch != '.')
        {
            if (ch != '-' and ch != '+') { x = x * 10 + (ch - '0'); }
            else
            {
                if (ch == '-')
                {
                    data(x, r, s, sum);
                    r++;
                }
                else if (ch == '+')
                {
                    data(x, r, s, sum);
                    s++;
                }
                x = 0;
            }
            cin >> ch;
        }
        data(x, r, s, sum);
        cout << sum << endl;
    }
}
