#include <iostream>

using namespace std;

int main()
{
    int x, copy_x, copy_x_2;
    int a, b = 0, split;

    while (cin >> x)
    {
        copy_x_2 = copy_x = x;
        int counter = 0, truncate_num = 1;

        while (x > 0)
        {
            x /= 10;
            counter++;
        }
        split = counter / 2;

        for (int i = 0; i < split; i++)
        {
            truncate_num *= 10;
        }

        a = copy_x / truncate_num;
        b = copy_x % (truncate_num);

        int a_invert = 0;

        while (a > 0)
        {
            a_invert = a_invert * 10 + a % 10;
            a /= 10;
        }

        cout << copy_x_2 << " -> " << (a_invert + b) << endl;
    }
}