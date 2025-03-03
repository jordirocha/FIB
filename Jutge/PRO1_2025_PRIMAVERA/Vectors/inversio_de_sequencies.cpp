
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a;
    while (cin >> a)
    {
        vector<int> elements(a);
        for (int i = 0; i < a; i++)
            cin >> elements[i];
        if (a == 1)
        {
            cout << elements[0] << endl;
        }
        else
        {
            for (int i = elements.size() - 1; i >= 0; i--)
            {
                if (i == 0)
                    cout << elements[i];
                else
                    cout << elements[i] << " ";
            }
            cout << endl;
        }
    }
}
