#include <iostream>

using namespace std;

int main() {
    int a1, a2, b1, b2;

    cin >> a1 >> a2 >> b1 >> b2;


    if (b1 >= a1 and b1 <= a2) {
        if (b2 >= a1 and b2 <= a2) cout << "[" << b1 << "," << b2 << "]" << endl;
        else if (b2 > a1 and b2 > a2) cout << "[" << b1 << "," << a2 << "]" << endl;
    } else if (a1 >= b1 and a1 <= b2) {
        if (a2 >= b1 and a2 <= b2)cout << "[" << a1 << "," << a2 << "]" << endl;
        else if (a2 > b1 and a2 > b2) cout << "[" << a1 << "," << b2 << "]" << endl;
    } else
        cout << "[]" << endl;

}
