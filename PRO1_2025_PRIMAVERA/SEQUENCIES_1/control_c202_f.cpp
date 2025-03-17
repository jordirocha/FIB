//
// programa lee una secuencia de naturales, y que cuente y escriba aquellos
// que acaben con las mismas tres cifras que el primer número de la secuencia
// Input: secuencia no vacía de naturales mayores o iguales que 100
// Output: números de la entrada que acaben con las mismas tres cifras que el primer número de la
// secuencia, así como cuántos de estos números existen
//
#include <iostream>

using namespace std;

int main()
{
    int x, counter = 0;
    cin >> x;

    int lastDigits = x % 1000;

    cout << "nombres que acaben igual que " << x << ":" << endl;
    while (cin >> x)
    {
        int tempLastDigits = x % 1000;
        if (tempLastDigits == lastDigits)
        {
            counter++;
            cout << x << endl;
        }
    }
    cout << "total: " << counter << endl;
}
