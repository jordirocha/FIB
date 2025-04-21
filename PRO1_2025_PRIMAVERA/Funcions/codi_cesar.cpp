#include <iostream>
using namespace std;

char codificat(char c, int k)
{
    int s = k % 26;
    char n;
    if (c + s > 'z') { n = 'a' + ((s - ('z' - c)) - 1); }
    else { n = c + s; }
    return 'A' + (n - 'a');
}
int main()
{
    int k;
    while (cin >> k)
    {
        char b;
        while (cin >> b and b != '.')
        {
            if (b >= 'a' and b <= 'z') { cout << codificat(b, k); }
            else if (b == '_') { cout << ' '; }
            else { cout << b; }
        }
        cout << endl;
    }
}
