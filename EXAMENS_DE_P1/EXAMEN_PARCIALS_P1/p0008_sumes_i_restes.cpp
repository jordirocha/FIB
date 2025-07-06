#include <iostream>
using namespace std;

int main()
{
    char c;
    while (cin >> c)
    {
        int result = 0;
        int sign   = 1; // signe actual (+1 o -1)

        while (c != '.')
        {
            // Processar signes abans del nombre
            while (c == '+' || c == '-')
            {
                if (c == '-') sign *= -1;
                cin >> c;
            }
            // Llegir el nombre
            int num = 0;
            while (isdigit(c))
            {
                num = num * 10 + (c - '0');
                cin >> c;
            }

            // Aplicar el signe i afegir al resultat
            result += sign * num;
            sign = 1; // reiniciar signe per al segÃ¼ent nombre
        }

        cout << result << endl;
    }

    return 0;
}
