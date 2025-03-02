//
// Created by jordi on 27/11/24.
//

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int avalua(const vector<int> &P, int x) {

  int result = 0;

    for (int i = 0; i < P.size(); i++) {
        result += P[i]*pow( x, i);
    }
    return result;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> P(n);
        for (int i = 0; i < n; ++i)
            cin >> P[i];
        int x;
        cin >> x;
        cout << avalua(P, x) << endl;
    }
    return 0;
}
