#include <iostream>
using namespace std;
int valencia(int n)
{
    int even = 0, odd = 0, i = 1;
    while (n > 0)
    {
        int t = n % 10;
        if (i % 2 == 0) { even += t; }
        else { odd += t; }
        n /= 10;
        i++;
    }
    int r = odd - even;
    if (r < 0) { return -(r); }
    else { return r; }
}

int main()
{
    int a, max = 0;
    bool found = false;
    while (not found and cin >> a)
    {
        int val = valencia(a);
        if (val == 0) { found = true; }
        else if (val > max) { max = val; }
    }
    if (not found) { cout << "La valencia maxima es " << max << "." << endl; }
    else { cout << "El primer nombre equilibrat es " << a << "." << endl; }
}
