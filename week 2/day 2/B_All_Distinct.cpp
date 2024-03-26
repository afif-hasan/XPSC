#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        int length = n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val]++;
        }
        int del = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            del += (it->second - 1);
        }
        if (del % 2 == 0)
            cout << length - del << endl;
        else
            cout << length - del - 1 << endl;
    }
    return 0;
}