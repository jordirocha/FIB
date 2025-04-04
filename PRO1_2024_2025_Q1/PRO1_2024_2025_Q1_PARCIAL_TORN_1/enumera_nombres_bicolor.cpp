#include <iostream>
using namespace std;

void print(int x, int n)
{
    if (n != 0)
    {
        cout << x;
        print(x, --n);
    }
}

int main()
{
    int x;
    cin >> x;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            int l = 1;
            int r = x - 1;
            while (i != j and r > 0)
            {
                print(i, l);
                print(j, r);
                cout << endl;
                l++;
                r--;
            }
        }
    }
}
