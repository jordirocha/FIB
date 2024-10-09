#include <iostream>

using namespace std;

int main()
{
    int n;
    int counterNumbers = 0;

    while (cin >> n)
    {
        int copyN = n;
        int counter = 0;
        int firstDigit = 0;

        while (n > 0)
        {
            if (n < 10)
                firstDigit = n;
            n /= 10;
            counter++;
        }

        if (counter > 3)
        {
            int lastDigit = copyN % 10;
            if (firstDigit == lastDigit)
                counterNumbers++;
        }
    }

    if (counterNumbers >= 5)
    {
        cout << "SI" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
