#include <iostream>
#include <vector>
using namespace std;
void print(vector<string> &v, string prefix)
{
    cout << "Comencen amb " << prefix << ":" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].size() >= prefix.size())
        {
            string slice;
            for (int k = 0; k < prefix.size(); k++) slice += v[i][k];
            if (slice == prefix) cout << v[i] << endl;
        }
    }
}
int main()
{
    int n;
    while (cin >> n)
    {
        vector<string> names(n);
        for (int i = 0; i < n; i++) cin >> names[i];
        int m;
        cin >> m;
        vector<string> prefix(m);
        for (int i = 0; i < m; i++) cin >> prefix[i];
        for (int i = 0; i < m; i++) print(names, prefix[i]);
    }
}
