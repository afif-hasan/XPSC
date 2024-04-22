#include <bits/stdc++.h>
#define endl '\n'
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
#define loop for (ll i = 0; i < n; i++)
using namespace std;
int main()
{
    fast;
    ll tst;
    cin >> tst;
    while (tst--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> a;
        vector<pair<ll, ll>> b;
        vector<pair<ll, ll>> c;
        for (ll i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            a.push_back({val, i});
        }
        for (ll i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            b.push_back({val, i});
        }
        for (ll i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            c.push_back({val, i});
        }
        sort(a.begin(), a.end(), greater<pair<ll, ll>>());
        sort(b.begin(), b.end(), greater<pair<ll, ll>>());
        sort(c.begin(), c.end(), greater<pair<ll, ll>>());
        ll ans = 0;
        for (ll i = 0; i < 3; i++)
        {
            for (ll j = 0; j < 3; j++)
            {
                for (ll k = 0; k < 3; k++)
                {
                    if (a[i].second != b[j].second && b[j].second != c[k].second && a[i].second != c[k].second)
                    {
                        ans = max(ans, a[i].first + b[j].first + c[k].first);
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}