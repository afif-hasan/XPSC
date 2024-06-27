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
bool possible(ll mid, vector<ll> times, ll n, ll totalmachine)
{
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (mid / times[i] >= totalmachine - cnt)
            return true;
        cnt += (mid / times[i]);
    }
    if (cnt >= totalmachine)
        return true;
    else
        return false;
}
int main()
{
    fast;
    ll machine, totalMachine;

    cin >> machine >> totalMachine;
    ll n = machine;
    vector<ll> times(machine);
    for (ll i = 0; i < machine; i++)
    {
        cin >> times[i];
    }
    sort(times.begin(), times.end());
    ll l = 1, r = 1e18;
    ll ans = -1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (possible(mid, times, n, totalMachine))
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
