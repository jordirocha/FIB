#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, p, k;
    char ch;
    cin >> n >> p >> k >> ch;
    vector<string> words(n);
    for (int i = 0; i < n; i++) { cin >> words[i]; }
    if (ch == 'd')
    {
        int limit = (p + k + 1) > n ? n : p + k + 1;
        cout << words[p + 1];
        k--;
        for (int i = p + 2; i < limit; i++)
        {
            cout << " " << words[i];
            k--;
        }
        if (k > 0)
        {
            for (int i = 0; i < k; i++) { cout << " " << words[i]; }
        }
    }
    else
    {
        int limit = (p - k) < 0 ? 0 : p - k;
        cout << words[p - 1];
        k--;
        for (int i = p - 2; i >= limit; i--)
        {
            cout << " " << words[i];
            k--;
        }
        if (k > 0)
        {
            for (int i = 0; i < k; i++) { cout << " " << words[words.size() - 1 - i]; }
        }
    }
    cout << endl;
}
