#include <iostream>

using namespace std;

struct Racional
{
    int num, den;
};

int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

void simplify(Racional &r)
{
    int div = gcd(r.num, r.den);
    r.num /= div;
    r.den /= div;
}

int main()
{
    Racional a, b;
    char del = '/', op;
    cin >> a.num >> del >> a.den >> op;
    simplify(a);
    while (op != '=')
    {
        cin >> b.num >> del >> b.den >> op;
        Racional temp;
        temp.num = a.num * b.den + a.den * b.num;
        temp.den = a.den * b.den;
        simplify(temp);
        a = temp;
    }
    cout << a.num << '/' << a.den << endl;
}
