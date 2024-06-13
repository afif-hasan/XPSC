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
    ll n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll res = 0;
    for (ll i = 0; i < (1 << n); i++)
    {
        ll sum = 0;
        ll mn = INT_MAX;
        ll mx = INT_MIN;
        ll cnt = 0;
        for (ll j = n - 1; j >= 0; j--)
        {
            if ((1 << j) & i)
            {

                cnt++;
                sum += v[j];
                mn = min(v[j], mn);
                mx = max(v[j], mx);
            }
        }
        ll dif = mx - mn;
        if ((cnt >= 2) && (sum >= l) && (sum <= r) && (dif >= x))
        {
            res++;
        }
    }
    cout << res << endl;
    return 0;
}