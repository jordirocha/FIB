#include <iostream>

using namespace std;

bool es_primo(int x)
{
    if (x < 2)
        return false;
    for (int d = 2; d * d <= x; ++d)
    {
        if (x % d == 0)
            return false;
    }
    return true;
}

int siguiente_primo(int x)
{
    int num = x + 1;

    while (not es_primo(num))
        num++;

    return num;
}

int main()
{
    int n;
    cin >> n;

    while (es_primo(n))
    {
        cout << siguiente_primo(n) << endl;
        cin >> n;
    }
}
