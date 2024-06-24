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
bool less_than_k(ll n, ll k, ll mid, vector<ll> v)
{
    ll cnt = 0;
    for (ll i = n / 2; i < n; i++)
    {
        if (mid - v[i] >= 0)
            cnt += mid - v[i];
    }
    if (cnt > k)
        return false;
    else
        return true;
}
int main()
{
    fast;
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    ll median = v[n / 2];
    ll l = median, r = 2 * 1e9, ans = -1;
    if (n == 1)
        cout << v[n / 2] + k << endl;
    else
    {
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (less_than_k(n, k, mid, v))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}