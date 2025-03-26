#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct Parvulari
{
    string name;
    int c, p;
};
bool comp(const Parvulari &a, const Parvulari &b)
{
    if (a.c == b.c)
    {
        if (a.p == b.p)
        {
            if (a.name.length() == b.name.length()) { return a.name < b.name; }
            return a.name.length() < b.name.length();
        }
        return a.p > b.p;
    }
    return a.c > b.c;
}
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        vector<Parvulari> prof(p);
        for (int j = 0; j < p; j++)
        {
            Parvulari p1;
            cin >> p1.name;
            cin >> p1.c;
            cin >> p1.p;
            prof[j] = p1;
        }
        sort(prof.begin(), prof.end(), &comp);
        for (int j = 0; j < p; j++) { cout << prof[j].name << endl; }
        cout << endl;
    }
}
