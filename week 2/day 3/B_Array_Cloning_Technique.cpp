#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
    ll tst;
    cin >> tst;
    while (tst--)
    {
        ll n;
        cin >> n;
        map<ll, ll> mp;
        ll mx = INT_MIN;
        for (ll i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val]++;
            mx = max(mx, mp[val]);
        }
        ll ans = 0;
        while (mx < n)
        {
            ll remain = n - mx;
            ans++;
            ans += min(remain, mx);
            mx += min(remain, mx);
        }
        cout << ans << endl;
    }
    return 0;
}