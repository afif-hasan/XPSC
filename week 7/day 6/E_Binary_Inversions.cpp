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
        ll n;
        cin >> n;
        vector<pair<ll, ll>> v(n);
        for (ll i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            if (val == 1)
            {
                v[i].first = 1;
                if (i == 0)
                    v[i].second = 1;
                else
                    v[i].second = v[i - 1].second + 1;
            }
            else
            {
                v[i].first = 0;
                if (i == 0)
                    v[i].second = 0;
                else
                    v[i].second = v[i - 1].second;
            }
        }
        ll nochange = 0, zerochange = 0, onechange = 0;
        bool forzero = false, forone = false;
        for (ll i = 0; i < n; i++)
        {
            if (v[i].first == 0)
            {
                nochange += v[i].second;

                if (forzero)
                {
                    zerochange += v[i].second + 1;
                }
                forzero = true;
            }
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            if (!forone)
            {
                if (v[i].first == 0)
                {
                    onechange += v[i].second - 1;
                }
                else
                {
                    forone = true;
                    onechange += v[i].second - 1;
                }
            }
            else
            {
                if (v[i].first == 0)
                {
                    onechange += v[i].second;
                }
            }
        }
        ll ans = max({nochange, onechange, zerochange});
        cout << ans << endl;
    }
    return 0;
}
