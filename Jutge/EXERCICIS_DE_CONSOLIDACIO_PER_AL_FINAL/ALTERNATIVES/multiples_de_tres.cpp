#include <iostream>
using namespace std;

int suma_digits(int x)
{
    int suma;
    if (x < 10)
        suma = x;
    else
        suma = (x % 10) + suma_digits(x / 10);
    return suma;
}

bool es_multiple_3(int n){
    if(n < 10) return n % 3 == 0;
    else return suma_digits(n) % 3 == 0;
}


int main() {
    int n;
    while (cin >> n) {
        cout << (es_multiple_3(n) ? "true" : "false") << endl;
    }
}


