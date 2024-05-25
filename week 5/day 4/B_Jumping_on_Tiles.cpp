#include <bits/stdc++.h>
#define endl '\n'
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
#define loop for (ll i = 0; i < n; i++)
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

        int n = s.size();
        map<char, vector<int>> fnd;

        for (int i = 0; i < n; ++i)
        {
            fnd[s[i]].push_back(i);
        }

        int direction = (s[0] < s[n - 1]) ? 1 : -1;
        vector<int> ans;

        for (char c = s[0]; c != s[n - 1] + direction; c += direction)
        {
            for (auto now : fnd[c])
            {
                ans.push_back(now);
            }
        }

        int cost = 0;
        for (int i = 1; i < ans.size(); i++)
            cost += abs(s[ans[i]] - s[ans[i - 1]]);

        cout << cost << " " << ans.size() << endl;
        for (auto now : ans)
        {
            cout << now + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}