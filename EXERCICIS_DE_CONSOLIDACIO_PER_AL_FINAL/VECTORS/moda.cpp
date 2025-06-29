#include <algorithm>
#include <iostream>
#include <strings.h>
#include <vector>
using namespace std;

bool sorting(string a, string b) { return (a > b); }

string mostFrequent(const vector<string> &nums)
{
    int size = nums.size(), rep = 1, maxRep = 0, i;
    string str = "";
    for (i = 1; i < size; ++i)
    {
        if (nums[i] == nums[i - 1]) { rep++; }
        else
        {
            if (maxRep == rep) { str = str > nums[i - 1] ? str : nums[i - 1]; }
            else if (rep > maxRep)
            {
                maxRep = rep;
                str    = nums[i - 1];
            }
            rep = 1;
        }
    }
    if (rep > maxRep) { str = nums[i - 1]; }
    return str;
}

int main()
{
    int n;
    while (cin >> n and n != 0)
    {
        vector<string> v(n);
        for (int i = 0; i < n; ++i) { cin >> v[i]; }
        sort(v.begin(), v.end(), sorting);
        cout << mostFrequent(v) << endl;
    }
}