//
// Created by jordi on 13/11/24.
//
#include <iostream>
#include <cmath>

using namespace std;

void swap2(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(3);
    int a, b;
    a = 2;
    b = 5;
    swap2(a, b);
}
