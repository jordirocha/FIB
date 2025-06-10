#include <cassert>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/*-------------------------------------------------------------------
 * PRE:  v és un vector V, pos és la posició de y_1 a v,
 * 		 |r| = |v|.
 * POST: r conté els valors del vector v ordenats creixentment.
 */
void ordena(const vector<int> &v, int pos, vector<int> &r) {
    int i = pos - 1, j = pos, k = 0;

    while (i >= 0 and j < v.size()) {
        if (v[i] < v[j]) {
            r[k++] = v[i--];
        } else {
            r[k++] = v[j++];
        }
    }

    while (i >= 0) {
        r[k++] = v[i--];
    }

    while (j < v.size()) {
        r[k++] = v[j++];
    }
}
