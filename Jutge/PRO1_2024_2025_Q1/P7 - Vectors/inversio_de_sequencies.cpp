#include <iostream>
#include <vector>

//

// Created by jordi on 27/11/24.
//
using namespace std;

int main() {
    int n;

    while (cin >> n) {
        vector<int> ve(n);
        for (int j = 0; j < ve.size(); j++) {
            cin >> ve[j];
        }

        if (ve.size() > 0) {
            cout << ve[ve.size()-1] << " ";
            for (int i = ve.size()-2; i >= 0; i--) {
                if (i == 0)
                    cout << ve[i];
                else
                    cout << ve[i] << " ";
            }
        }

cout << endl;
    }
}
