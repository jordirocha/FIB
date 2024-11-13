#include <iostream>
#include <cmath>

using namespace std;

bool es_any_de_traspas(int any) {
    bool result = false;

    if (any % 4 == 0) {
        if (any % 100 == 0) {
            if (any % 400 == 0) {
                return true;
            }
        } else {
            return true;
        }
    }

    return result;
}

bool es_data_valida(int d, int m, int a) {
    bool is_valid = true;

    if (es_any_de_traspas(a)) {
        if ((m == 2) and (d > 29 || d <= 0)) {
            is_valid = false;
        }

        if (d <= 0 || d >= 32) {
            is_valid = false;
        }

        if (m <= 0 || m >= 13) {
            is_valid = false;
        }
    } else {
        if ((m == 2) and (d > 28 || d <= 0)) {
            is_valid = false;
        }

        if (d <= 0 || d >= 32) {
            is_valid = false;
        }
    }

    if((m==4 || m==11 || m==6 || m==9) and d > 30) is_valid = false;
    if((m==1 || m==3 || m==5 || m==7|| m==8|| m==10|| m==12) and d > 31) is_valid = false;

    return is_valid;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(3);

    cout << es_data_valida(30, 4, 5636) << endl;
}

