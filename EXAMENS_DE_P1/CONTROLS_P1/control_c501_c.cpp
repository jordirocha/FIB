#include <iostream>
#include <vector>

using namespace std;
void insertionSort(vector<string> &v, const int size)
{
    for (int i = 1; i < size; i++)
    {
        string key = v[i];
        int j      = i - 1;
        while (j >= 0 && key < v[j])
        {
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = key;
    }
}

int main()
{
    int x;
    cin >> x;
    if (x != 0)
    {
        vector<string> words(x);
        for (int i = 0; i < x; i++) { cin >> words[i]; }
        insertionSort(words, x);
        cout << words[0];
        for (int i = 1; i < x; i++) cout << ',' << words[i];
    }
    cout << endl;
}
