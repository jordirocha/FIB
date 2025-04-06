#include <iostream>
using namespace std;

int main()
{
    string prev, next, last;
    cin >> prev;
    while (cin >> next and next != "END")
    {
        if (prev < next)
        {
            cout << prev << endl;
            prev = next;
        }
        else { cout << next << endl; }
        last = next;
    }
    if (prev >= last) { cout << prev << endl; }
}
