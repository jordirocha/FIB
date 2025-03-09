
#include <iostream>

using namespace std;

// void toBinary(int x)
// {
//
//     if (x == 1)
//     {
//         cout << 1;
// //        return 1;
//     }
//
//
// //    int cociente = toBinary(x / 2);
//     toBinary(x / 2);
//     // cout << cociente << endl;
// //    return cociente;
// }

void toBinary(int x)
{
    int residuo;
    if (x == 1)
    {
        // residuo = 1;
        cout << "1";
    }
    else if (x == 2)
    {
        cout << "0";
        cout << "1";
        // residuo = 1;
    }
    else if (x == 3)
    {
        cout << "1";
        cout << "1";
    }
    else
    {
        cout << (x % 2) << endl;
        toBinary(x / 2);
    }

    //    int cociente = toBinary(x / 2);
    // cout << cociente << endl;
    //    return cociente;

    // return residuo;
}

int main()
{
    int a;
    while (cin >> a)
    {
        toBinary(a);
        // while (a > 0)
        // {
        //     cout << a % 2 << endl;
        //     a = a / 2;
        // }
    }
}
