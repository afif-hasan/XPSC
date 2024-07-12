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
        int n;
        cin >> n;
        int res = INT_MAX;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int val;
            if (i == 0)
            {
                val = abs(v[i] - v[i + 1]);
            }
            else if (i == n - 1)
            {
                val = abs(v[i] - v[i - 1]);
            }
            else
            {
                val = max(abs(v[i] - v[i + 1]), abs(v[i] - v[i - 1]));
            }
            res = min(res, val);
        }
        cout << res << endl;
    }
    return 0;
}
