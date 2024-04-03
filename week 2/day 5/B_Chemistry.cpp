#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define INF INT_MAX
using namespace std;
int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (char c : s)
            mp[c]++;
        int cnt = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second % 2 == 1)
                cnt++;
        }
        if (cnt > k + 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}