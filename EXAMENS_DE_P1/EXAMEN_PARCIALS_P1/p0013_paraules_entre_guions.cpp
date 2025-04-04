#include <iostream>
using namespace std;

void data(int c, int &c1, int &c2, int &c3)
{
    (c > 0 and c < 5 ? c1++ : c >= 5 and c <= 9 ? c2++ : (c > 9) ? c3++ : 0);
}

int main()
{
    char ch;
    int c1 = 0, c2 = 0, c3 = 0, c = 0;
    while (cin >> ch and ch != '.')
    {
        if (ch != '-') { c++; }
        else
        {
            data(c, c1, c2, c3);
            c = 0;
        }
    }
    data(c, c1, c2, c3);
    cout << c1 << ',' << c2 << ',' << c3 << endl;
}
