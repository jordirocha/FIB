#include <iostream>
using namespace std;

void cross(int n, char c) {
    int center = (n / 2) + 1;

    bool first = true;

    for (int i = 0; i < n; i++) {

       if (first) {
           first = false;
       }else {
           cout << endl;
       }

        for (int j = 0; j < n; j++) {
            if (i != (center - 1)) {
                if (j == (center - 1)) {
                    cout << c;
                } else {
                    cout << " ";
                }
            } else {
                cout << c;
            }
        }

    }
}


int main() {
    int n;
    char c;
    while (cin >> n >> c) cross(n, c);
    return 0;
}
