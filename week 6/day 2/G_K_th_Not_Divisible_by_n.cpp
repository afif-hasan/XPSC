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
bool les_than_k(ll mid, ll n, ll k)
{
    ll chk = (mid * n) - mid;
    if (chk < k)
        return true;
    else
        return false;
}
int main()
{
    fast;
    tst
    {
        ll n, k;
        cin >> n >> k;
        ll mx_divisible = 1e10;
        ll l = 0, r = mx_divisible, ans = -1;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (les_than_k(mid, n, k))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        ll no_of_non_div = (ans * n) - ans;
        ll add = k - no_of_non_div;
        ll res = (ans * n) + add;
        cout << res << endl;
    }
    return 0;
}