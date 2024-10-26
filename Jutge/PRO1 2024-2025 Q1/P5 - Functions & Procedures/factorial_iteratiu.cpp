#include <iostream>

using namespace std;

int factorial(int n)
{

    int suma = 1;

    for (int i = 2; i <= n; i++)
    {
        suma *= i;
    }

    return suma;
}

int main()
{
    cout << factorial(4) << endl;
}