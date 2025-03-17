
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++)
        cin >> words[i];
    for (int j = words.size() - 1; j >= 0; j--)
    {
        for (int k = words[j].size() - 1; k >= 0; k--)
            cout << words[j][k];
        cout << endl;
    }
}
