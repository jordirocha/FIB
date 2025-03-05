//
// Programa determina si un numero es bocadillo, un natural n con sólo dos dígitos d y e diferentes, que forman una
// secuencia de d1e2..ekd. Es decir, el digit d es el primer y último dígito de n (es el pan), y el dígito e está
// repetido k ≥ 1 veces en medio
// Input: un numero natural
// Output: cierto si el numero es bocadillo, en caso contrario falso
//
#include <iostream>
using namespace std;
/**
 * @pre  n >= 0
 * @post retorna cert si n és un número entrepà, fals en cas contrari
 */
bool is_sandwich(int n)
{
    if (n < 100)
        return false;
    int d = n % 10;
    n = n / 10;
    int e = n % 10;
    bool allEqual = true;
    while (n >= 10 and allEqual and d != e)
    {
        int temp = (n % 10);
        if (e != temp)
            allEqual = false;
        n = n / 10;
    }
    if (allEqual and d == n)
        return true;
    return false;
}
