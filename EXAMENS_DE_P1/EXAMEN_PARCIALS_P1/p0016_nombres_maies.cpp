#include <iostream>
using namespace std;

void print(int f, string s)
{
    for (int i = 0; i < f; i++) cout << s << endl;
}

void maia(int a)
{
    if (a == 0) { cout << "zero" << endl; }
    else if (a == 1) { print(1, "."); }
    else if (a == 2) { print(1, ".."); }
    else if (a == 3) { print(1, "..."); }
    else if (a == 4) { print(1, "...."); }
    else if (a == 5) { print(1, "-----"); }
    else if (a == 6)
    {
        print(1, ".");
        print(1, "-----");
    }
    else if (a == 7)
    {
        print(1, "..");
        print(1, "-----");
    }
    else if (a == 8)
    {
        print(1, "...");
        print(1, "-----");
    }
    else if (a == 9)
    {
        print(1, "....");
        print(1, "-----");
    }
    else if (a == 10) { cout << "-----" << endl << "-----" << endl; }
    else if (a == 11)
        cout << "." << endl << "-----" << endl << "-----" << endl;
    else if (a == 12)
        cout << ".." << endl << "-----" << endl << "-----" << endl;
    else if (a == 13)
        cout << "..." << endl << "-----" << endl << "-----" << endl;
    else if (a == 14)
        cout << "...." << endl << "-----" << endl << "-----" << endl;
    else if (a == 15)
        cout << "-----" << endl << "-----" << endl << "-----" << endl;
    else if (a == 16)
    {
        print(1, ".");
        print(3, "-----");
    }
    else if (a == 17)
    {
        print(1, "..");
        print(3, "-----");
    }
    else if (a == 18)
    {
        print(1, "...");
        print(3, "-----");
    }
    else if (a == 19)
    {
        print(1, "....");
        print(3, "-----");
    }
}

void base(int n, int b)
{
    if (n > 0)
    {
        base(n / b, b);
        maia(n % b);
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        cout << n << endl;
        if (n == 0) { cout << "zero" << endl; }
        else { base(n, 20); }
    }
}
