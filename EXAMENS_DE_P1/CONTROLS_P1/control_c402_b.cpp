#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool comp(int a, int b) { return a < b; }
int main()
{
    int n, k;
    while (cin >> n >> k)
    {
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end(), comp);
        vector<int> results(k);
        int i = 1, counter = 1;
        while (i < v.size())
        {
            if (v[i - 1] == v[i]) { counter++; }
            else
            {
                results[v[i - 1]] = counter;
                counter           = 1;
            }
            i++;
        }
        if (n > 0 and counter >= 1) { results[v[i - 1]] = counter; }
        for (int j = 0; j < results.size(); j++)
        {
            cout << j << ":" << results[j];
            if (j != results.size() - 1) { cout << ", "; }
            else { cout << '.'; }
        }
        cout << endl;
    }
}
