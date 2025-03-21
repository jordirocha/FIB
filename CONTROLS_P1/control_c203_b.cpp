#include <iostream>

using namespace std;

bool acaba_en_quaranta_dos(int x)
{
    int d1 = x % 10;
    int d2 = (x / 10) % 10;
    return d2 == 4 and d1 == 2;
}
int main()
{
    int a, lines = 1;
    while (cin >> a)
    {
        int b, counter = 0;
        while (a != 0 and cin >> b)
        {
            if (acaba_en_quaranta_dos(b)) { counter++; };
            a--;
        }
        cout << "#" << lines << ": " << counter << endl;
        lines++;
    }
}
