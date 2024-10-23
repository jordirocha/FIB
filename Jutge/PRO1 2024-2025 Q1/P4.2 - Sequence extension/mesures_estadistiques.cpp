#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(4);

    int a;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        double min, max, avg = 0, sum = 0;
        double b, c;

        cin >> b;
        cin >> c;

        min = max = c;
        sum += c;

        for (int j = 0; j < b - 1; j++)
        {
            cin >> c;
            if (c < min)
            {
                min = c;
            }
            if (c > max)
            {
                max = c;
            }
            sum += c;
        }

        avg = sum / b;

        cout << min << " " << max << " " << avg << endl;
    }
}