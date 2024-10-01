#include <iostream>

using namespace std;

int main()
{
    int h, m, s, n;

    cin >> n;

    h = (n / 60) / 60;
    m = (n / 60) % 60;
    s = n % 60;

    cout << h << " " << m << " " << s << endl;
}