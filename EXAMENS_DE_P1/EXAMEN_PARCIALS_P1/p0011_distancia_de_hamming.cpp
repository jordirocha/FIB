#include <iostream>
using namespace std;

void calcula(int a, int b, int &dist, int &sum)
{
    if (a > 0 or b > 0)
    {
        int d1 = a % 10;
        int d2 = b % 10;
        if (d1 != d2)
        {
            dist++;
            sum += (d1 + d2);
        }
        calcula(a / 10, b / 10, dist, sum);
    }
}

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        int dist = 0, sum = 0;
        calcula(a, b, dist, sum);
        cout << dist << " " << sum << endl;
    }
}
