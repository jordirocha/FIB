#include <iostream>
#include <vector>

using namespace std;

struct Enviament
{
    string dni;
    string exer;
    int temps;
    string res;
};

typedef vector<Enviament> Historia;

int main()
{
    int n;
    cin >> n;
    Historia env(n);
    for (int i = 0; i < n; i++)
    {
        cin >> env[i].dni >> env[i].exer >> env[i].temps >> env[i].res;
    }

    for (int i = 0; i < n; i++)
    {
        if (env[i].res ==
            "verd")
        {
            cout << env[i].dni << ' ' << env[i].exer << ' ' << env[i].temps <<
                ' ' << env[i].
                res << endl;
        }
    }

    // Racional a, b;
    // string op;
    // cin >> a.num >> a.den;
    // simplify(a);
    // print(a);
    // while (cin >> op >> b.num >> b.den)
    // {
    //     Racional temp = operation(op, a, b);
    //     print(temp);
    //     a = temp;
    // }
}
