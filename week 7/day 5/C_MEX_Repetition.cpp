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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n + 1);
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        for (ll i = 0; i <= n; i++)
        {
            if (mp[i] == 0)
            {
                v[n] = i;
                break;
            }
        }
        ll shft = k % (n + 1);

        vector<ll> ans(n + 1);
        for (ll i = 0; i <= n; i++)
        {
            if (i + shft <= n)
            {
                ans[i + shft] = v[i];
            }
            else
            {
                ans[(i + shft) - n - 1] = v[i];
            }
        }
        for (ll i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
