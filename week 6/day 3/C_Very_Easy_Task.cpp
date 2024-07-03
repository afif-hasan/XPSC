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
bool possible(ll mid, ll n, ll x, ll y)
{
    ll totalcpy;
    ll mn = min(x, y);
    if (mid >= mn)
        mid = mid - mn;
    else
        return false;
    totalcpy = (mid / x) + (mid / y) + 1;
    if (totalcpy >= n)
        return true;
    else
        return false;
}
int main()
{
    fast;
    ll n, x, y;
    cin >> n >> x >> y;
    ll l = 1, r = 4 * 1e9, ans = -1;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (possible(mid, n, x, y))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;
    return 0;
}