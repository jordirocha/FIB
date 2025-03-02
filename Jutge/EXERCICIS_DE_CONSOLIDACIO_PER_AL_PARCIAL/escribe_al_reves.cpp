//
// Created by jordi on 06/11/24.
//

#include <iostream>
using namespace std;

//pre: n >= 0
//post: write bacwkwards n on output channel
void write_back(int n) {
    if (n < 10) {
        cout << n;
    }else {
        cout << n % 10;
        write_back(n / 10);
    }
}


int main() {
    int n;
    while (cin >> n) {
        write_back(n);
        cout << endl;
    }
}
