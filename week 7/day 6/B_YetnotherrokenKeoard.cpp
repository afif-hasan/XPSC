#include <bits/stdc++.h>
#define endl '\n'
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
#define modulo 1000000007
#define tst     \
    ll tst;     \
    cin >> tst; \
    while (tst--)
using namespace std;
int main()
{
    fast;
    tst
    {
        string s;
        cin >> s;
        int len = s.size();
        stack<pair<int, char>> caps, smalls;
        for (int i = 0; i < len; i++)
        {
            if (s[i] != 'b' && s[i] != 'B')
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    smalls.push({i, s[i]});
                }
                else
                {
                    caps.push({i, s[i]});
                }
            }
            else if (s[i] == 'b')
            {
                if (!smalls.empty())
                {
                    smalls.pop();
                }
            }
            else
            {
                if (!caps.empty())
                {
                    caps.pop();
                }
            }
        }
        vector<pair<int, char>> v;
        while (!smalls.empty())
        {
            v.push_back({smalls.top().first, smalls.top().second});
            smalls.pop();
        }
        while (!caps.empty())
        {
            v.push_back({caps.top().first, caps.top().second});
            caps.pop();
        }
        sort(v.begin(), v.end());
        for (auto pr : v)
        {
            cout << pr.second;
        }
        cout << endl;
    }
    return 0;
}
