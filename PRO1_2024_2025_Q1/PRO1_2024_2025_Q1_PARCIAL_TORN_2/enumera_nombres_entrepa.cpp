//
//
// Input:
// Output:
//
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
    int s = x - 2;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (i != j)
            {
                cout << i;
                print(j, s);
                cout << i << endl;
            }
        }
    }
}
