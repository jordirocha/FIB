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

int main() {
    cout.setf(ios::fixed);
    cout.precision(3);

    cout << es_any_de_traspas(2000) << endl;
}
