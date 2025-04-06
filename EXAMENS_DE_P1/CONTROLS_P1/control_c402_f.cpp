#include <iostream>
#include <vector>
using namespace std;

struct Concursants
{
    string n;
    int p;
};

int main()
{
    int n, real, aprox = 0, j = 0;
    cin >> n;
    vector<Concursants> v(n);
    for (int i = 0; i < n; i++) cin >> v[i].n >> v[i].p;
    cin >> real;
    for (int i = 0; i < n; i++)
    {
        if (v[i].p <= real and v[i].p > aprox)
        {
            aprox = v[i].p;
            j     = i;
        }
    }
    if (aprox == 0) { cout << "CAP GUANYADOR" << endl; }
    else { cout << "guanyador/a: " << v[j].n << endl; }
}
