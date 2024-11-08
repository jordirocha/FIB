#include <iostream>

using namespace std;

int main() {
    int x, y, z, t;
    cin >> x >> y >> z >> t;

    if (x == y) {
        if (z == t) {
            cout << "NO" << endl;
        } else {
            if (x == z || x == t) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    } else if (x == z) {
        if (y == t) {
            cout << "NO" << endl;
        } else {
            if ((x == y || x == t)) {
                //y==t and
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    } else if (x == t) {
        if (y == z) {
            cout << "NO" << endl;
        } else {
            if (x == y || y == z) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    } else if (y == z) {
        if (x == t || y == x || y == t) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    } else if (y == t) {
        if (z == x || y == z || y == x) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    } else if (z == t) {
        if (x == y || z == x || z == y) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    } else {
        cout << "NO" << endl;
    }
}
