#include <iostream>
using namespace std;

bool es_fantastic(int x)
{
    int der   = 1;
    bool next = (x != 0);
    while (next and x > 0)
    {
        int d = x % 10;
        if (der % 2 == 0) { next = d % 2 == 0; }
        else { next = d % 2 != 0; }
        x = x / 10;
        der++;
    }
    return next;
}

int main()
{
    int a, c = 0, triples = 0, elem = 0;
    while (cin >> a)
    {
        if (es_fantastic(a))
        {
            c++;
            if (c == 3)
            {
                triples++;
                c = 2;
            }
        }
        else { c = 0; }
        elem++;
    }
    cout << "nombres: " << elem << endl;
    cout << "triplets fantastics: " << triples << endl;
}
