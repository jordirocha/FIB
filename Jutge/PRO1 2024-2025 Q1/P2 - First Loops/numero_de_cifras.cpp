#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << a << endl;
    }
    else
    {
        for (int i = a; i <= b; i++)
        {
            cout << i;
            if (i != b)
            {
                cout << ',';
            }
        }
        cout << endl;
    }
}