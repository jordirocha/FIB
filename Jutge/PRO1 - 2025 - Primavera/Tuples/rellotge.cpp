#include <iostream>
#include <typeinfo>
using namespace std;
struct Rellotge
{
    int h; // hores (0<=h<24)
    int m; // minuts (0<=m<60)
    int s; // segons (0<=s<60)
};

Rellotge mitja_nit()
{
    Rellotge temp{.h = 0, .m = 0, .s = 0};
    return temp;
}

void incrementa(Rellotge &r)
{
    int seconds = r.h * 3600 + r.m * 60 + r.s + 1;
    seconds = seconds % 86400;
    r.s = seconds % 60;
    r.m = (seconds / 60) % 60;
    r.h = seconds / 3600;
}

void escriu(const Rellotge &r)
{
    cout << (r.h / 10) << (r.h % 10) << ":";
    cout << (r.m / 10) << (r.m % 10) << ":";
    cout << (r.s / 10) << (r.s % 10) << endl;
}

int main()
{
    Rellotge r = mitja_nit();
    for (int i = (25 * 60 * 60) / 2; i <= 25 * 60 * 60; ++i)
    {
        escriu(r);
        incrementa(r);
    }
    return 0;
}
