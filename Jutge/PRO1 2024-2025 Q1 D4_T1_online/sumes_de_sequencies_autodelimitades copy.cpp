#include <iostream>

using namespace std;

int main()
{

    char x, y;
    int sequence = 0;
    int integer = 0;
    int bits = 0;
    int sumTotal = 0;

    while (cin >> x >> y)
    {

        if (x == '0' and y == '1')
        {
            sequence++;
            if (sequence == 2)
            {
                cout << sumTotal << endl;
                sumTotal = sequence = bits = 0;
            }
            else
            {
                // cout << sumTotal << endl;
                // for (int i = 0; i < bits; i++)
                // {
                //     int digit = integer % 10;
                //     int sum = 1;
                //     for (int j = 0; j < i && digit == 1; j++)
                //         sum *= 2;

                //     sumTotal += sum * digit;
                //     integer /= 10;
                // }
            }
        }
        else
        {

            // integer = integer * 10 + (x - '0');
            sumTotal = sumTotal * 2 + (x - '0');

            bits++;
            sequence = 0;
        }
    }
}
