#include <iostream>

using namespace std;

int main()
{
    int seconds;
    cin >> seconds;

    int s = seconds % 60;
    int m = (seconds / 60) % 60;
    int h = seconds / 3600;

    cout << h << ' ' << m << ' ' << s << endl;
}