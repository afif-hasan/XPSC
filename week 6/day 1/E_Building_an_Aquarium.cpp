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
    tst
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> height(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> height[i];
        }
        ll mxht = 1e10;
        ll l = 0, r = mxht, ans = -1;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            ll sum = 0;
            for (ll i = 0; i < n; i++)
            {
                if (mid >= height[i])
                {
                    sum += mid - height[i];
                }
            }
            if (sum <= x)
            {
                ans = mid;
                l = mid + 1;
            }
            else if (sum > x)
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}