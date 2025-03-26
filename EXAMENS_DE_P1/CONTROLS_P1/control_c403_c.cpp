#include <iostream>
#include <vector>
using namespace std;

struct Racional
{
    int num, den;
};
Racional minim(const Racional &a, const Racional &b)
{
    int x = a.num * b.den;
    int y = a.den * b.num;
    if (x <= y) { return a; }
    return b;
}

void read(vector<Racional> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int x, y;
        char ch = '/';
        cin >> x >> ch >> y;
        v[i] = {x, y};
    }
}

int main()
{
    int n;
    cin >> n;
    vector<Racional> a(n);
    vector<Racional> b(n);
    read(a);
    read(b);
    for (int i = 0; i < n; i++)
    {
        Racional temp = minim(a[i], b[i]);
        cout << temp.num << '/' << temp.den << endl;
    }
}
