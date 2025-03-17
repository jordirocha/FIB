
#include <iostream>
#include <vector>

using namespace std;

bool es_primo(int x)
{
    for (int d = 2; d * d <= x; ++d)
    {
        if (x % d == 0)
            return false;
    }
    return true;
}

void garbellEratosthenes(vector<int> &v)
{
    for (int i = 3; i < 1000000; i++)
    {
        if (es_primo(i))
        {
            v.push_back(i);
        }
    }
}

int main()
{
    int a;
    vector<int> v{2};
    garbellEratosthenes(v);
    while (cin >> a)
    {
        int i = 0;
        bool found = false;
        bool isLower = true;
        while (not found and i < v.size() and isLower)
        {
            if (v[i] > a)
                isLower = false;
            else if (v[i] == a)
                found = true;

            i++;
        }
        if (found)
            cout << a << " es primer" << endl;
        else
            cout << a << " no es primer" << endl;
    }
}
