#include <iostream>
#include <vector>

//

// Created by jordi on 27/11/24.
//
using namespace std;

string obtener() {
    char c;
    string s;
    cout << "nada1"<< endl;
    if (cin >> c) {
         obtener();
    }else {
        return "";
    }
    cout << "nada"<< endl;
    return s;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        // string ch;
        // cin >> ch;
        // cout << ch << endl;
        cout << obtener() << endl;
    }

    // while () {
    //     cout << n << endl;
    //     // vector<char> ve(n);
    //     // for (int j = 0; j < ve.size(); j++) {
    //     //     cin >> ve[j];
    //     // }
    //     //
    //     // cout << ve[ve.size() - 1] << endl;
    //     // for (int i = ve.size() - 2; i >= 0; i--) {
    //     //     cout << " " << ve[i] << endl;
    //     // }
    //     cout << endl;
    // }
}
