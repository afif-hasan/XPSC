#include <bits/stdc++.h>
#define endl '\n'
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
using namespace std;
int main()
{
    fast;
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int extra = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > 1)
            {
                extra += (it->second - 1);
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (extra > 0)
            {
                cnt++;
            }
            if (mp[v[i]] > 1)
            {
                extra--;
            }
            mp[v[i]]--;
        }
        cout << cnt << endl;
    }
    return 0;
}