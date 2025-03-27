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

void print(Racional r)
{
    if (r.num == 0 or r.den == 1) { cout << r.num << endl; }
    else if (r.num == r.den) { cout << 1 << endl; }
    else { cout << r.num << '/' << r.den << endl; }
}

void simplify(Racional &r)
{
    int div = gcd(r.num, r.den);
    r.num /= div;
    r.den /= div;
    if (r.den < 0)
    {
        r.num = -1 * r.num;
        r.den = -1 * r.den;
    }
}

Racional operation(string op, Racional a, Racional b)
{
    Racional f;
    if (op == "suma")
    {
        f.num = a.num * b.den + a.den * b.num;
        f.den = a.den * b.den;
    }
    else if (op == "resta")
    {
        f.num = a.num * b.den - a.den * b.num;
        f.den = a.den * b.den;
    }
    else if (op == "multiplica")
    {
        f.num = a.num * b.num;
        f.den = a.den * b.den;
    }
    else
    {
        f.num = a.num * b.den;
        f.den = a.den * b.num;
    }
    simplify(f);
    return f;
}

int main()
{
    Racional a, b;
    string op;
    cin >> a.num >> a.den;
    simplify(a);
    print(a);
    while (cin >> op >> b.num >> b.den)
    {
        Racional temp = operation(op, a, b);
        print(temp);
        a = temp;
    }
}
