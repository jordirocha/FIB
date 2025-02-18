#include <iostream>

using namespace std;

int main() {
    int year;
    cin >> year;

    int lastTwoDigits = year % 100;
    bool leapYear;

    if (lastTwoDigits == 0) {
        int firstTwoDigits = year / 100;
        leapYear = (firstTwoDigits % 4 == 0);
    } else {
        leapYear = (year % 4 == 0);
    }

    if (leapYear) cout << "YES" << endl;
    else cout << "NO" << endl;
}