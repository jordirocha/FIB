#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    double avg = 0, avg_1 = 0, avg_2 = 0, avg_3 = 0;
    bool flag = false;
    cin >> x >> y >> z;

    avg = (x + y + z) / 3.;
    avg_1 = (x + y) / 2.;
    avg_2 = (x + z) / 2.;
    avg_3 = (y + z) / 2.;

    if (avg_1 == avg)
    {
        flag = true;
    }
    else if (avg_2 == avg)
    {
        flag = true;
    }
    else if (avg_3 == avg)
    {
        flag = true;
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}