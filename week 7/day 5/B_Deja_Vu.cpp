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
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n), x;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<ll, ll> mp;
        for (ll i = 0; i < q; i++)
        {
            ll val;
            cin >> val;
            mp[val]++;
            if (mp[val] == 1)
            {
                x.push_back(val);
            }
        }
        for (ll val : x)
        {
            for (ll i = 0; i < n; i++)
            {
                if (a[i] % (1 << val) == 0)
                {
                    a[i] = a[i] + (1 << (val - 1));
                }
            }
        }
        for (ll val : a)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
