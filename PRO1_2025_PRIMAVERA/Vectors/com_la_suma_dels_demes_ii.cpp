#include <iostream>
#include <vector>
using namespace std;

bool sumaIgualaOtros(const vector<int> &v)
{
    int suma = 0, j = 0;
    for (int i : v) suma += i;
    while (suma - v[j] != v[j] and j < v.size()) { j++; }
    return suma - v[j] == v[j];
}

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> integers(n);
        for (int i = 0; i < n; i++) cin >> integers[i];
        cout << (sumaIgualaOtros(integers) ? "YES" : "NO") << endl;
    }
}
