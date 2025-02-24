#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x = n % 10;
    n = n / 10;
    int y = n % 10;
    n = n / 10;
    int z = n % 10;

    cout << (x + y + z) << endl;
}
