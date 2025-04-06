#include <iostream>
using namespace std;

int descom(int x)
{
    int d = 1, num = x;
    while (num >= 10)
    {
        d *= 10;
        num = num / 10;
    }
    return d;
}

char egyptian(int x)
{
    if (x == 1) return 'A';
    if (x == 10) return 'B';
    if (x == 100) return 'C';
    if (x == 1000) return 'D';
    if (x == 10000) return 'E';
    if (x == 100000) return 'F';
    return 'G';
}

int main()
{
    string name;
    while (cin >> name)
    {
        int a, num = 0;
        while (cin >> a and a != -1) num = num + a;
        cout << name << endl << "+---------+" << endl;
        while (num > 0)
        {
            int blank = 0;
            int t     = descom(num);
            cout << '|';
            while (num >= t)
            {
                cout << egyptian(t);
                blank++;
                num -= t;
            }
            for (int i = blank; i < 9; i++) cout << " ";
            cout << '|' << endl;
        }
        cout << "+---------+" << endl << endl;
    }
}
