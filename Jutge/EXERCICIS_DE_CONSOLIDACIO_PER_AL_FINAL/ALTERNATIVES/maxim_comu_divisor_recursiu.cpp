#include <iostream>
using namespace std;

int mcd(int a, int b){
    int div;
    if(b == 0) div = a;
    else div= mcd(b, a % b);
    return div;
}

int main()
{
    int x, y;
    while (cin >> x >> y) {
        cout << mcd(x, y) << endl;
    }
    return 0;
}

