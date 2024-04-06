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
    ll tst;
    cin >> tst;
    while (tst--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n);
        ll pre[n + 1];
        pre[0] = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            pre[i + 1] = v[i] + pre[i];
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll del = pre[r] - pre[l - 1];
            ll add = (r - l + 1) * k;
            ll final = pre[n] - del + add;
            if (final % 2 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}