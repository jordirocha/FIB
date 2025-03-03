#include <iostream>

using namespace std;

int main()
{
    char a, b;

    cin >> a >> b;

    int diff = a - b;
    int absDiff = abs(diff);

    if (diff == 0)
    {
        cout << '-' << endl;
    }
    else if (absDiff == 15 || absDiff == 6)
    {
        if (diff > 0)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    else if (absDiff == 21)
    {
        if (diff > 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}