//
// Created by jordi on 06/11/24.
//
#include <iostream>

using namespace std;

int main() {
    int counter = 0;
    string p1, p2, str, str_ocurrence = "stop";
    bool stop = false;

    cin >> p1 >> p2;
    cin >> str;

    stop = (str == "stop");

    while (!stop) {
        cin >> str;
        if (str == str_ocurrence) {
            stop = true;
        } else if (str >= p1 && str <= p2) {
            counter++;
        }
    }
    cout << counter << endl;
}
