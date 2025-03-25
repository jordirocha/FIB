#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct Corredor
{
    string nom;
    int mins, segs;
};

bool comp(Corredor a, Corredor b)
{
    if (a.mins == b.mins)
        return (a.segs == b.segs) ? a.nom < b.nom : a.segs < b.segs;
    return a.mins < b.mins;
}

int main()
{
    int n;
    while (cin >> n)
    {
        vector<Corredor> c(n);
        for (int i = 0; i < n; i++) cin >> c[i].nom >> c[i].mins >> c[i].segs;
        sort(c.begin(), c.end(), comp);
        for (int i = 0; i < n; i++)
            cout << c[i].nom << ' ' << c[i].mins << ' ' << c[i].segs << endl;
        cout << "***" << endl;
    }
}
