#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(4);

    int a;
    double harmonicNum = 0.0;

    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        harmonicNum += 1.0 / i;
    }

    cout << harmonicNum << endl;
}