#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool isPermutation(vector<int> &v)
{
    int i = 0;
    while (v[i] == (i + 1) and i < v.size()) i++;
    return i == v.size();
}
int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        cout << isPermutation(v) << endl;
    }
}
