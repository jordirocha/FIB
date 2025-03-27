#include <iostream>
#include <vector>

using namespace std;

bool es_primo(int x)
{
    if (x < 2) { return false; }
    for (int d = 2; d * d <= x; ++d)
        if (x % d == 0) return false;
    return true;
}

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> integers(n);
        for (int i = 0; i < n; i++) cin >> integers[i];
        bool prime = false;
        for (int i = 0; i < n and not prime; i++)
            for (int j = 0; j < n and not prime; j++)
                if (i != j) { prime = es_primo(integers[i] + integers[j]); }
        if (prime) { cout << "si" << endl; }
        else { cout << "no" << endl; }
    }
}
