//
// Created by jordi on 06/11/24.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int counter = 0;
        if (n < 100) {
            cout << 0 << endl;
        } else {
            int fir_num = n % 10;
            n /= 10;
            int sec_num = n % 10;
            n /= 10;
            int thi_num = n % 10;
            n /= 10;

            if (sec_num > fir_num && sec_num > thi_num) {
                counter++;
            }

            while (n > 0) {
                fir_num = sec_num;
                sec_num = thi_num;

                thi_num = n % 10;
                n /= 10;

                if (sec_num > fir_num && sec_num > thi_num) {
                    counter++;
                }
            }

            cout << counter << endl;
        }
    }
}
