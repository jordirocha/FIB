#include <iostream>

using namespace std;

bool es_triangle_rectangle(int a, int b, int c)
{
    if ((a * a + b * b) == c * c) { return true; }
    else if ((c * c + b * b) == a * a) { return true; }
    else if ((c * c + a * a) == b * b) { return true; }
    return false;
}

int main()
{
    int a, b, c, counter = 0;
    cin >> a;
    cin >> b;
    while (cin >> c)
    {
        if (es_triangle_rectangle(a, b, c)) counter++;
        a = b;
        b = c;
    }
    cout << counter << endl;
}
