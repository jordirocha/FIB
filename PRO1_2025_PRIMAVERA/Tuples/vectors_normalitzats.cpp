#include <iostream>
#include <vector>
using namespace std;

struct Punt
{
    double x, y;
};

bool sumaEjes(const vector<Punt> &v)
{
    double x = .0, y = .0;
    for (int i = 0; i < v.size(); i++)
    {
        x += v[i].x;
        y += v[i].y;
    }
    return x != y;
}

Punt puntoBaricentro(const vector<Punt> &v)
{
    double x = .0, y = .0;
    for (int i = 0; i < v.size(); i++)
    {
        x += v[i].x;
        y += v[i].y;
    }
    Punt p{x / v.size(), y / v.size()};
    return p;
}

bool baricentre(const vector<Punt> &v, Punt &b)
{
    int i      = 0;
    bool match = false;
    while (not match and i < v.size())
    {
        if (b.x == v[i].x and b.y == v[i].y) match = true;
        i++;
    }
    return match;
}

bool iguales(const vector<Punt> &v)
{
    Punt t      = v[0];
    bool equals = true;
    int i       = 1;
    while (equals and i < v.size())
    {
        if (t.x != v[i].x or t.y != v[i].y) equals = false;
        i++;
    }
    return equals;
}

int main()
{
    int n;
    while (cin >> n)
    {
        vector<Punt> v(n);
        for (int i = 0; i < n; i++) { cin >> v[i].x >> v[i].y; }
        Punt p = puntoBaricentro(v);
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "baricentre: " << '(' << p.x << ',' << p.y << ')' << endl;
        if (iguales(v))
            cout << "el vector no compleix la propietat 1" << endl;
        else if (sumaEjes(v))
            cout << "el vector no compleix la propietat 2" << endl;
        else if (baricentre(v, p))
            cout << "el vector no compleix la propietat 3" << endl;
        else
            cout << "vector normalitzat" << endl;
    }
}
