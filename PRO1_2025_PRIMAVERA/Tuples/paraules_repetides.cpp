#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef vector<string> Matriu;
void repeticiones(const Matriu &v, vector<int> &freq)
{
    int i, rep = 1;
    for (i = 1; i < v.size(); ++i)
    {
        if (v[i - 1] == v[i]) { rep++; }
        else
        {
            freq[rep - 1] += v[i - 1].length();
            rep = 1;
        }
    }
    freq[rep - 1] += v[i - 1].length();
}
int main()
{
    int n;
    while (cin >> n)
    {
        Matriu m(n);
        for (int i = 0; i < n; i++) cin >> m[i];
        sort(m.begin(), m.end());
        vector<int> freq(n);
        repeticiones(m, freq);
        for (int i = 0; i < n; i++)
            if (freq[i] > 0) { cout << (i + 1) << " : " << freq[i] << endl; }
        cout << endl;
    }
}