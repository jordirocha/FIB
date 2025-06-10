
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/**
 * PRE:  v és un vector V i ∣v∣ ≥ 3.
 * POST: La posició en què es troba y1 a v.
 */
int picV(const vector<int> &v) {
    int i = 1, posicion = 0;
    bool match = false;
    while (not match and i < v.size()) {
        posicion++;
        if (v[i] > v[i - 1]) { match = true; }
        i++;
    }
    return --posicion;
}
