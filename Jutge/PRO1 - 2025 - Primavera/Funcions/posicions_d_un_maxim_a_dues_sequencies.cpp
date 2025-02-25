#include <iostream>

using namespace std;

void infoSequencia(int &max, int &lpos)
{
    int current, currentLpos = 1;
    cin >> current;
    while (current != 0)
    {
        if (current >= max)
        {
            max = current;
            lpos = currentLpos;
        }
        currentLpos++;
        cin >> current;
    }
}

void findInSequence(const int max)
{
    int m, current = 1;
    bool cont = true;
    cin >> m;
    while (m != 0 and cont)
    {
        if (m == max)
        {
            cout << ' ' << current << endl;
            cont = false;
        }
        current++;
        cin >> m;
    }

    if (cont)
        cout << " -" << endl;
}

int main()
{
    int max, lpos;
    infoSequencia(max, lpos);
    cout << max << ' ' << lpos;
    findInSequence(max);
}
