#include <iostream>
#include <vector>
using namespace std;
char lletra_mes_frequent(const string &s)
{
    char ch = 'z';
    int max = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int c = 0;
        for (int j = 0; j < s.length(); j++)
            if (s[i] == s[j]) c++;
        if (c == max)
        {
            if (s[i] < ch) ch = s[i];
        }
        else if (c > max)
        {
            max = c;
            ch  = s[i];
        }
    }
    return ch;
}
int main()
{
    cout.setf(ios::fixed);
    cout.precision(2);
    int n;
    while (cin >> n)
    {
        vector<string> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        double sum = 0.0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < v[i].length(); j++) sum += 1;
        }
        cout << (sum / n) << endl;
        for (int i = 0; i < n; i++)
        {
            if (v[i].length() >= (sum / n))
                cout << v[i] << ": " << lletra_mes_frequent(v[i]) << endl;
        }
    }
}
