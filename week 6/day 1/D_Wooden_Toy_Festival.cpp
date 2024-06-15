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
bool good_mid(ll mid, vector<ll> &y, ll n)
{
    ll carver_choice = abs(y[0] - mid);
    ll carvercnt = 1;
    for (ll i = 0; i < n; i++)
    {
        if (abs(y[i] - carver_choice) > mid)
        {
            carver_choice = abs(y[i] - mid); // new carver choice
            carvercnt++;
        }
    }
    if (carvercnt <= 3) // karon carver 3 jon given
        return true;
    else
        return false;
}
int main()
{
    fast;
    tst
    {
        ll n;
        cin >> n;
        vector<ll> y(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> y[i];
        }
        ll mxt = 1e10;
        sort(y.begin(), y.end(), greater<>());
        ll l = 0, r = mxt, ans = -1;
        while (l <= r)
        {
            ll mid = (l + r) / 2; // smallest maximum time is mid
            if (good_mid(mid, y, n))
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans << endl;
    }
    return 0;
}